struct bb2struct
{
	u32 _00;
	u32 _04;
	s32 _08;  // size?
	u32 FSTMaxLength;
	void* FSTLocationInRam;
};

void DVDReadAbsAsyncForBS(void *addr,
						  struct bb2struct *bb2,
						  int length,
						  int offset,
						  void (*cb)(s32 result, void *arg));

void DVDReadDiskID(void *block,
				   DVDDiskID *id,
				   void (*cb)(s32 result, void *arg));

void DVDReset(void);

