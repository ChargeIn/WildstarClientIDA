#include "../winhttp.h"

//----- (00000001407DC3CC) ----------------------------------------------------
PVOID __fastcall sub_1407DC3CC(PVOID Ptr)
{
	PVOID v2; // rbx

	v2 = DecodePointer(qword_140C5F558);
	qword_140C5F558 = EncodePointer(Ptr);
	return v2;
}

