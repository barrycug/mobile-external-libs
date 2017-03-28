// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tile.proto

#ifndef PROTOBUF_tile_2eproto__INCLUDED
#define PROTOBUF_tile_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "segment.pb.h"
// @@protoc_insertion_point(includes)

namespace opentraffic {
namespace osmlr {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_tile_2eproto();
void protobuf_AssignDesc_tile_2eproto();
void protobuf_ShutdownFile_tile_2eproto();

class Tile;
class Tile_Entry;

enum Tile_Marker {
  Tile_Marker_MarkDeleted = 1
};
bool Tile_Marker_IsValid(int value);
const Tile_Marker Tile_Marker_Marker_MIN = Tile_Marker_MarkDeleted;
const Tile_Marker Tile_Marker_Marker_MAX = Tile_Marker_MarkDeleted;
const int Tile_Marker_Marker_ARRAYSIZE = Tile_Marker_Marker_MAX + 1;

const ::google::protobuf::EnumDescriptor* Tile_Marker_descriptor();
inline const ::std::string& Tile_Marker_Name(Tile_Marker value) {
  return ::google::protobuf::internal::NameOfEnum(
    Tile_Marker_descriptor(), value);
}
inline bool Tile_Marker_Parse(
    const ::std::string& name, Tile_Marker* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Tile_Marker>(
    Tile_Marker_descriptor(), name, value);
}
// ===================================================================

class Tile_Entry : public ::google::protobuf::Message {
 public:
  Tile_Entry();
  virtual ~Tile_Entry();

  Tile_Entry(const Tile_Entry& from);

  inline Tile_Entry& operator=(const Tile_Entry& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Tile_Entry& default_instance();

  void Swap(Tile_Entry* other);

  // implements Message ----------------------------------------------

  Tile_Entry* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Tile_Entry& from);
  void MergeFrom(const Tile_Entry& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .opentraffic.osmlr.Segment segment = 1;
  inline bool has_segment() const;
  inline void clear_segment();
  static const int kSegmentFieldNumber = 1;
  inline const ::opentraffic::osmlr::Segment& segment() const;
  inline ::opentraffic::osmlr::Segment* mutable_segment();
  inline ::opentraffic::osmlr::Segment* release_segment();
  inline void set_allocated_segment(::opentraffic::osmlr::Segment* segment);

  // optional .opentraffic.osmlr.Tile.Marker marker = 2;
  inline bool has_marker() const;
  inline void clear_marker();
  static const int kMarkerFieldNumber = 2;
  inline ::opentraffic::osmlr::Tile_Marker marker() const;
  inline void set_marker(::opentraffic::osmlr::Tile_Marker value);

  // @@protoc_insertion_point(class_scope:opentraffic.osmlr.Tile.Entry)
 private:
  inline void set_has_segment();
  inline void clear_has_segment();
  inline void set_has_marker();
  inline void clear_has_marker();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::opentraffic::osmlr::Segment* segment_;
  int marker_;
  friend void  protobuf_AddDesc_tile_2eproto();
  friend void protobuf_AssignDesc_tile_2eproto();
  friend void protobuf_ShutdownFile_tile_2eproto();

  void InitAsDefaultInstance();
  static Tile_Entry* default_instance_;
};
// -------------------------------------------------------------------

class Tile : public ::google::protobuf::Message {
 public:
  Tile();
  virtual ~Tile();

  Tile(const Tile& from);

  inline Tile& operator=(const Tile& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Tile& default_instance();

  void Swap(Tile* other);

  // implements Message ----------------------------------------------

  Tile* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Tile& from);
  void MergeFrom(const Tile& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef Tile_Entry Entry;

  typedef Tile_Marker Marker;
  static const Marker MarkDeleted = Tile_Marker_MarkDeleted;
  static inline bool Marker_IsValid(int value) {
    return Tile_Marker_IsValid(value);
  }
  static const Marker Marker_MIN =
    Tile_Marker_Marker_MIN;
  static const Marker Marker_MAX =
    Tile_Marker_Marker_MAX;
  static const int Marker_ARRAYSIZE =
    Tile_Marker_Marker_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Marker_descriptor() {
    return Tile_Marker_descriptor();
  }
  static inline const ::std::string& Marker_Name(Marker value) {
    return Tile_Marker_Name(value);
  }
  static inline bool Marker_Parse(const ::std::string& name,
      Marker* value) {
    return Tile_Marker_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // repeated .opentraffic.osmlr.Tile.Entry entries = 1;
  inline int entries_size() const;
  inline void clear_entries();
  static const int kEntriesFieldNumber = 1;
  inline const ::opentraffic::osmlr::Tile_Entry& entries(int index) const;
  inline ::opentraffic::osmlr::Tile_Entry* mutable_entries(int index);
  inline ::opentraffic::osmlr::Tile_Entry* add_entries();
  inline const ::google::protobuf::RepeatedPtrField< ::opentraffic::osmlr::Tile_Entry >&
      entries() const;
  inline ::google::protobuf::RepeatedPtrField< ::opentraffic::osmlr::Tile_Entry >*
      mutable_entries();

  // optional uint32 creation_date = 2;
  inline bool has_creation_date() const;
  inline void clear_creation_date();
  static const int kCreationDateFieldNumber = 2;
  inline ::google::protobuf::uint32 creation_date() const;
  inline void set_creation_date(::google::protobuf::uint32 value);

  // optional uint64 changeset_id = 3;
  inline bool has_changeset_id() const;
  inline void clear_changeset_id();
  static const int kChangesetIdFieldNumber = 3;
  inline ::google::protobuf::uint64 changeset_id() const;
  inline void set_changeset_id(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:opentraffic.osmlr.Tile)
 private:
  inline void set_has_creation_date();
  inline void clear_has_creation_date();
  inline void set_has_changeset_id();
  inline void clear_has_changeset_id();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::opentraffic::osmlr::Tile_Entry > entries_;
  ::google::protobuf::uint64 changeset_id_;
  ::google::protobuf::uint32 creation_date_;
  friend void  protobuf_AddDesc_tile_2eproto();
  friend void protobuf_AssignDesc_tile_2eproto();
  friend void protobuf_ShutdownFile_tile_2eproto();

  void InitAsDefaultInstance();
  static Tile* default_instance_;
};
// ===================================================================


// ===================================================================

// Tile_Entry

// optional .opentraffic.osmlr.Segment segment = 1;
inline bool Tile_Entry::has_segment() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Tile_Entry::set_has_segment() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Tile_Entry::clear_has_segment() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Tile_Entry::clear_segment() {
  if (segment_ != NULL) segment_->::opentraffic::osmlr::Segment::Clear();
  clear_has_segment();
}
inline const ::opentraffic::osmlr::Segment& Tile_Entry::segment() const {
  // @@protoc_insertion_point(field_get:opentraffic.osmlr.Tile.Entry.segment)
  return segment_ != NULL ? *segment_ : *default_instance_->segment_;
}
inline ::opentraffic::osmlr::Segment* Tile_Entry::mutable_segment() {
  set_has_segment();
  if (segment_ == NULL) segment_ = new ::opentraffic::osmlr::Segment;
  // @@protoc_insertion_point(field_mutable:opentraffic.osmlr.Tile.Entry.segment)
  return segment_;
}
inline ::opentraffic::osmlr::Segment* Tile_Entry::release_segment() {
  clear_has_segment();
  ::opentraffic::osmlr::Segment* temp = segment_;
  segment_ = NULL;
  return temp;
}
inline void Tile_Entry::set_allocated_segment(::opentraffic::osmlr::Segment* segment) {
  delete segment_;
  segment_ = segment;
  if (segment) {
    set_has_segment();
  } else {
    clear_has_segment();
  }
  // @@protoc_insertion_point(field_set_allocated:opentraffic.osmlr.Tile.Entry.segment)
}

// optional .opentraffic.osmlr.Tile.Marker marker = 2;
inline bool Tile_Entry::has_marker() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Tile_Entry::set_has_marker() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Tile_Entry::clear_has_marker() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Tile_Entry::clear_marker() {
  marker_ = 1;
  clear_has_marker();
}
inline ::opentraffic::osmlr::Tile_Marker Tile_Entry::marker() const {
  // @@protoc_insertion_point(field_get:opentraffic.osmlr.Tile.Entry.marker)
  return static_cast< ::opentraffic::osmlr::Tile_Marker >(marker_);
}
inline void Tile_Entry::set_marker(::opentraffic::osmlr::Tile_Marker value) {
  assert(::opentraffic::osmlr::Tile_Marker_IsValid(value));
  set_has_marker();
  marker_ = value;
  // @@protoc_insertion_point(field_set:opentraffic.osmlr.Tile.Entry.marker)
}

// -------------------------------------------------------------------

// Tile

// repeated .opentraffic.osmlr.Tile.Entry entries = 1;
inline int Tile::entries_size() const {
  return entries_.size();
}
inline void Tile::clear_entries() {
  entries_.Clear();
}
inline const ::opentraffic::osmlr::Tile_Entry& Tile::entries(int index) const {
  // @@protoc_insertion_point(field_get:opentraffic.osmlr.Tile.entries)
  return entries_.Get(index);
}
inline ::opentraffic::osmlr::Tile_Entry* Tile::mutable_entries(int index) {
  // @@protoc_insertion_point(field_mutable:opentraffic.osmlr.Tile.entries)
  return entries_.Mutable(index);
}
inline ::opentraffic::osmlr::Tile_Entry* Tile::add_entries() {
  // @@protoc_insertion_point(field_add:opentraffic.osmlr.Tile.entries)
  return entries_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::opentraffic::osmlr::Tile_Entry >&
Tile::entries() const {
  // @@protoc_insertion_point(field_list:opentraffic.osmlr.Tile.entries)
  return entries_;
}
inline ::google::protobuf::RepeatedPtrField< ::opentraffic::osmlr::Tile_Entry >*
Tile::mutable_entries() {
  // @@protoc_insertion_point(field_mutable_list:opentraffic.osmlr.Tile.entries)
  return &entries_;
}

// optional uint32 creation_date = 2;
inline bool Tile::has_creation_date() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Tile::set_has_creation_date() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Tile::clear_has_creation_date() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Tile::clear_creation_date() {
  creation_date_ = 0u;
  clear_has_creation_date();
}
inline ::google::protobuf::uint32 Tile::creation_date() const {
  // @@protoc_insertion_point(field_get:opentraffic.osmlr.Tile.creation_date)
  return creation_date_;
}
inline void Tile::set_creation_date(::google::protobuf::uint32 value) {
  set_has_creation_date();
  creation_date_ = value;
  // @@protoc_insertion_point(field_set:opentraffic.osmlr.Tile.creation_date)
}

// optional uint64 changeset_id = 3;
inline bool Tile::has_changeset_id() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Tile::set_has_changeset_id() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Tile::clear_has_changeset_id() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Tile::clear_changeset_id() {
  changeset_id_ = GOOGLE_ULONGLONG(0);
  clear_has_changeset_id();
}
inline ::google::protobuf::uint64 Tile::changeset_id() const {
  // @@protoc_insertion_point(field_get:opentraffic.osmlr.Tile.changeset_id)
  return changeset_id_;
}
inline void Tile::set_changeset_id(::google::protobuf::uint64 value) {
  set_has_changeset_id();
  changeset_id_ = value;
  // @@protoc_insertion_point(field_set:opentraffic.osmlr.Tile.changeset_id)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace osmlr
}  // namespace opentraffic

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::opentraffic::osmlr::Tile_Marker> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::opentraffic::osmlr::Tile_Marker>() {
  return ::opentraffic::osmlr::Tile_Marker_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_tile_2eproto__INCLUDED
