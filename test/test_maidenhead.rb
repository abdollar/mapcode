require "test/unit"
require "maidenhead"

class TestMaidenhead < Test::Unit::TestCase
  def test_basic
    assert_equal Maidenhead::VERSION, '1.0.0'
  end

  def test_latlong
    assert_equal Maidenhead.new.mapcode(37.445474475283376, -122.16181335628585), "9Z.YVD3@US-CA"
    assert_equal Maidenhead.new.mapcode(37.2841, -122.1432), "FH.95R9@US-CA"
  end

  def test_badlatlong
    exception = assert_raise(StandardError) {
      Maidenhead.new.mapcode(0.00, 0.00)
    }
    assert_equal("Expected a valid lat long", exception.message)
  end

  def test_invalidParams
    exception = assert_raise(TypeError) {
      Maidenhead.new.mapcode('0.00', '0.00')
    }
    assert_equal("no implicit conversion to float from string", exception.message)
  end
end
