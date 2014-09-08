# -*- ruby -*-

require "rubygems"
require "hoe"

HOE = Hoe.spec "mapcode" do
  developer('Abdul Chaudhry', 'abdollar@yahoo.com')
  self.urls = ['http://example.com']
  self.readme_file   = 'README.md'
  self.history_file  = 'CHANGELOG.rdoc'
  self.extra_rdoc_files  = ["ext/mapcode/mapcode.c"]
  self.extra_dev_deps << ['rake-compiler', '>= 0']
  self.spec_extras = { :extensions => ["ext/mapcode/extconf.rb"] }
end

require "rake/extensiontask"

Rake::ExtensionTask.new(HOE.name, HOE.spec) do |ext|
  ext.lib_dir = File.join('lib', 'mapcode')
end

Rake::Task[:test].prerequisites << :compile

# vim: syntax=ruby
