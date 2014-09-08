# Maidenhead - a geolocation zipcode generator which uses open source code from mapcode.com

The Maidenhead gem provides a form of zipcode (pairs of letters and digits) for geo locations similar to the maidenhead locator system used by amateur radio and originally devised at a VHF meeting in Maidenhead England. The maidenhead gem returns the mapcode for a given geo location using code from mapcode.com.

## Installing
### OSX / Linux
``` sh
gem install maidenhead
```

## Usage

Generate a zipcode or mapcode for a given geolocation
``` ruby
Maidenhead.new.mapcode(37.2841, -122.1432)
```

This returns a mapcode as a string "FH.95R9@US-CA"
- you can split on the @ to return just the location if the territory or country/state is not being used.

(The MIT License)

Copyright (c) 2014 Abdul Chaudhry

Permission is hereby granted, free of charge, to any person obtaining
a copy of this software and associated documentation files (the
'Software'), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice shall be
included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
