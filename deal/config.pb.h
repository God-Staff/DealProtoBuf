// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: config.proto

#ifndef PROTOBUF_config_2eproto__INCLUDED
#define PROTOBUF_config_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3002000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3002000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
namespace qiuwanli {
class Config;
class ConfigDefaultTypeInternal;
extern ConfigDefaultTypeInternal _Config_default_instance_;
class ConfigFile;
class ConfigFileDefaultTypeInternal;
extern ConfigFileDefaultTypeInternal _ConfigFile_default_instance_;
}  // namespace qiuwanli

namespace qiuwanli {

namespace protobuf_config_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_config_2eproto

enum Config_Type {
  Config_Type_DownFilePath = 0,
  Config_Type_ThreadNumUp = 1,
  Config_Type_ThreadNumDown = 2,
  Config_Type_FileUpSpeed = 3,
  Config_Type_FileDownSpeed = 4,
  Config_Type_FilePath = 5,
  Config_Type_Config_Type_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  Config_Type_Config_Type_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool Config_Type_IsValid(int value);
const Config_Type Config_Type_Type_MIN = Config_Type_DownFilePath;
const Config_Type Config_Type_Type_MAX = Config_Type_FilePath;
const int Config_Type_Type_ARRAYSIZE = Config_Type_Type_MAX + 1;

const ::google::protobuf::EnumDescriptor* Config_Type_descriptor();
inline const ::std::string& Config_Type_Name(Config_Type value) {
  return ::google::protobuf::internal::NameOfEnum(
    Config_Type_descriptor(), value);
}
inline bool Config_Type_Parse(
    const ::std::string& name, Config_Type* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Config_Type>(
    Config_Type_descriptor(), name, value);
}
// ===================================================================

class Config : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:qiuwanli.Config) */ {
 public:
  Config();
  virtual ~Config();

  Config(const Config& from);

  inline Config& operator=(const Config& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Config& default_instance();

  static inline const Config* internal_default_instance() {
    return reinterpret_cast<const Config*>(
               &_Config_default_instance_);
  }

  void Swap(Config* other);

  // implements Message ----------------------------------------------

  inline Config* New() const PROTOBUF_FINAL { return New(NULL); }

  Config* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Config& from);
  void MergeFrom(const Config& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output)
      const PROTOBUF_FINAL {
    return InternalSerializeWithCachedSizesToArray(
        ::google::protobuf::io::CodedOutputStream::IsDefaultSerializationDeterministic(), output);
  }
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(Config* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  typedef Config_Type Type;
  static const Type DownFilePath =
    Config_Type_DownFilePath;
  static const Type ThreadNumUp =
    Config_Type_ThreadNumUp;
  static const Type ThreadNumDown =
    Config_Type_ThreadNumDown;
  static const Type FileUpSpeed =
    Config_Type_FileUpSpeed;
  static const Type FileDownSpeed =
    Config_Type_FileDownSpeed;
  static const Type FilePath =
    Config_Type_FilePath;
  static inline bool Type_IsValid(int value) {
    return Config_Type_IsValid(value);
  }
  static const Type Type_MIN =
    Config_Type_Type_MIN;
  static const Type Type_MAX =
    Config_Type_Type_MAX;
  static const int Type_ARRAYSIZE =
    Config_Type_Type_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Type_descriptor() {
    return Config_Type_descriptor();
  }
  static inline const ::std::string& Type_Name(Type value) {
    return Config_Type_Name(value);
  }
  static inline bool Type_Parse(const ::std::string& name,
      Type* value) {
    return Config_Type_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // string valueString = 2;
  void clear_valuestring();
  static const int kValueStringFieldNumber = 2;
  const ::std::string& valuestring() const;
  void set_valuestring(const ::std::string& value);
  #if LANG_CXX11
  void set_valuestring(::std::string&& value);
  #endif
  void set_valuestring(const char* value);
  void set_valuestring(const char* value, size_t size);
  ::std::string* mutable_valuestring();
  ::std::string* release_valuestring();
  void set_allocated_valuestring(::std::string* valuestring);

  // uint32 length = 1;
  void clear_length();
  static const int kLengthFieldNumber = 1;
  ::google::protobuf::uint32 length() const;
  void set_length(::google::protobuf::uint32 value);

  // .qiuwanli.Config.Type type = 3;
  void clear_type();
  static const int kTypeFieldNumber = 3;
  ::qiuwanli::Config_Type type() const;
  void set_type(::qiuwanli::Config_Type value);

  // @@protoc_insertion_point(class_scope:qiuwanli.Config)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr valuestring_;
  ::google::protobuf::uint32 length_;
  int type_;
  mutable int _cached_size_;
  friend struct  protobuf_config_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class ConfigFile : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:qiuwanli.ConfigFile) */ {
 public:
  ConfigFile();
  virtual ~ConfigFile();

  ConfigFile(const ConfigFile& from);

  inline ConfigFile& operator=(const ConfigFile& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ConfigFile& default_instance();

  static inline const ConfigFile* internal_default_instance() {
    return reinterpret_cast<const ConfigFile*>(
               &_ConfigFile_default_instance_);
  }

  void Swap(ConfigFile* other);

  // implements Message ----------------------------------------------

  inline ConfigFile* New() const PROTOBUF_FINAL { return New(NULL); }

  ConfigFile* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ConfigFile& from);
  void MergeFrom(const ConfigFile& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output)
      const PROTOBUF_FINAL {
    return InternalSerializeWithCachedSizesToArray(
        ::google::protobuf::io::CodedOutputStream::IsDefaultSerializationDeterministic(), output);
  }
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(ConfigFile* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .qiuwanli.Config config = 1;
  int config_size() const;
  void clear_config();
  static const int kConfigFieldNumber = 1;
  const ::qiuwanli::Config& config(int index) const;
  ::qiuwanli::Config* mutable_config(int index);
  ::qiuwanli::Config* add_config();
  ::google::protobuf::RepeatedPtrField< ::qiuwanli::Config >*
      mutable_config();
  const ::google::protobuf::RepeatedPtrField< ::qiuwanli::Config >&
      config() const;

  // @@protoc_insertion_point(class_scope:qiuwanli.ConfigFile)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::qiuwanli::Config > config_;
  mutable int _cached_size_;
  friend struct  protobuf_config_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Config

// uint32 length = 1;
inline void Config::clear_length() {
  length_ = 0u;
}
inline ::google::protobuf::uint32 Config::length() const {
  // @@protoc_insertion_point(field_get:qiuwanli.Config.length)
  return length_;
}
inline void Config::set_length(::google::protobuf::uint32 value) {
  
  length_ = value;
  // @@protoc_insertion_point(field_set:qiuwanli.Config.length)
}

// string valueString = 2;
inline void Config::clear_valuestring() {
  valuestring_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Config::valuestring() const {
  // @@protoc_insertion_point(field_get:qiuwanli.Config.valueString)
  return valuestring_.GetNoArena();
}
inline void Config::set_valuestring(const ::std::string& value) {
  
  valuestring_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:qiuwanli.Config.valueString)
}
#if LANG_CXX11
inline void Config::set_valuestring(::std::string&& value) {
  
  valuestring_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:qiuwanli.Config.valueString)
}
#endif
inline void Config::set_valuestring(const char* value) {
  
  valuestring_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:qiuwanli.Config.valueString)
}
inline void Config::set_valuestring(const char* value, size_t size) {
  
  valuestring_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:qiuwanli.Config.valueString)
}
inline ::std::string* Config::mutable_valuestring() {
  
  // @@protoc_insertion_point(field_mutable:qiuwanli.Config.valueString)
  return valuestring_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Config::release_valuestring() {
  // @@protoc_insertion_point(field_release:qiuwanli.Config.valueString)
  
  return valuestring_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Config::set_allocated_valuestring(::std::string* valuestring) {
  if (valuestring != NULL) {
    
  } else {
    
  }
  valuestring_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), valuestring);
  // @@protoc_insertion_point(field_set_allocated:qiuwanli.Config.valueString)
}

// .qiuwanli.Config.Type type = 3;
inline void Config::clear_type() {
  type_ = 0;
}
inline ::qiuwanli::Config_Type Config::type() const {
  // @@protoc_insertion_point(field_get:qiuwanli.Config.type)
  return static_cast< ::qiuwanli::Config_Type >(type_);
}
inline void Config::set_type(::qiuwanli::Config_Type value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:qiuwanli.Config.type)
}

// -------------------------------------------------------------------

// ConfigFile

// repeated .qiuwanli.Config config = 1;
inline int ConfigFile::config_size() const {
  return config_.size();
}
inline void ConfigFile::clear_config() {
  config_.Clear();
}
inline const ::qiuwanli::Config& ConfigFile::config(int index) const {
  // @@protoc_insertion_point(field_get:qiuwanli.ConfigFile.config)
  return config_.Get(index);
}
inline ::qiuwanli::Config* ConfigFile::mutable_config(int index) {
  // @@protoc_insertion_point(field_mutable:qiuwanli.ConfigFile.config)
  return config_.Mutable(index);
}
inline ::qiuwanli::Config* ConfigFile::add_config() {
  // @@protoc_insertion_point(field_add:qiuwanli.ConfigFile.config)
  return config_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::qiuwanli::Config >*
ConfigFile::mutable_config() {
  // @@protoc_insertion_point(field_mutable_list:qiuwanli.ConfigFile.config)
  return &config_;
}
inline const ::google::protobuf::RepeatedPtrField< ::qiuwanli::Config >&
ConfigFile::config() const {
  // @@protoc_insertion_point(field_list:qiuwanli.ConfigFile.config)
  return config_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace qiuwanli

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::qiuwanli::Config_Type> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::qiuwanli::Config_Type>() {
  return ::qiuwanli::Config_Type_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_config_2eproto__INCLUDED
