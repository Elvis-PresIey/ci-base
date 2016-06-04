#ifndef SOLUTIONS_HASH_HASH_HRECORD_H_
#define SOLUTIONS_HASH_HASH_HRECORD_H_

template<class Key, class Data>
class HRecord {
 public:
  Key h_key;
  Data h_data;
  HRecord();
  HRecord(Key key_, const Data& data);
  HRecord(const HRecord& t);
  ~HRecord();
};

#endif  // SOLUTIONS_HASH_HASH_HRECORD_H_
