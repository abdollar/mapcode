#include <stdio.h>
#include <ruby.h>

VALUE cMaidenhead;

static VALUE latlong2mapcode(VALUE klass, VALUE lat, VALUE lon)
{
  double latitude = NUM2DBL(lat);
  double longitude = NUM2DBL(lon);
  char *r[64];
  int nrresults = coord2mc(r, latitude, longitude, 0);
  if (nrresults < 2) {
    rb_raise(rb_eStandardError, "Expected a valid lat long");
    return Qnil;
  }
  char res[64];
  sprintf(res, "%s@%s", r[0], r[1]);
  return rb_str_new2(res);
}

/*
 * call-seq:
 *   Maidenhead.new.mapcode(required, required) -> string
 *
 * Call +mapcode
 * returns the mapcode as a string given a lat and long as float
 */
void Init_maidenhead()
{
  cMaidenhead = rb_define_class_under(rb_cObject, "Maidenhead", rb_cObject);
  rb_define_method(cMaidenhead, "mapcode", latlong2mapcode, 2);
}

