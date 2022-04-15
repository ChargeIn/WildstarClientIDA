#include "../winhttp.h"

//----- (00000001407E3C60) ----------------------------------------------------
void __fastcall sub_1407E3C60(_QWORD* lpMem)
{
	void* v2; // rcx
	void* v3; // rcx
	void* v4; // rcx
	void* v5; // rcx
	void* v6; // rcx
	void* v7; // rcx
	void* v8; // rcx
	void* v9; // rcx
	void* v10; // rcx
	char* v11; // rdi

	if (lpMem)
	{
		v2 = (void*)lpMem[7];
		if (v2)
			sub_1407E14C0(v2);
		v3 = (void*)lpMem[9];
		if (v3)
			sub_1407E14C0(v3);
		v4 = (void*)lpMem[11];
		if (v4)
			sub_1407E14C0(v4);
		v5 = (void*)lpMem[13];
		if (v5)
			sub_1407E14C0(v5);
		v6 = (void*)lpMem[14];
		if (v6)
			sub_1407E14C0(v6);
		v7 = (void*)lpMem[15];
		if (v7)
			sub_1407E14C0(v7);
		v8 = (void*)lpMem[16];
		if (v8)
			sub_1407E14C0(v8);
		v9 = (void*)lpMem[20];
		if (v9 != &unk_14095E4B0)
			sub_1407E14C0(v9);
		sub_1407E2340(13);
		v10 = (void*)lpMem[23];
		if (v10 && !_InterlockedDecrement((volatile signed __int32*)v10) && v10 != &unk_140C0FD80)
			sub_1407E14C0(v10);
		sub_1407E2528(13);
		sub_1407E2340(12);
		v11 = (char*)lpMem[24];
		if (v11)
		{
			sub_1407E6958(lpMem[24]);
			if (v11 != off_140C102E0 && v11 != (char*)&unk_140C102F0 && !*(_DWORD*)v11)
				sub_1407E67C0(v11);
		}
		sub_1407E2528(12);
		sub_1407E14C0(lpMem);
	}
}
// 140C102E0: using guessed type void *off_140C102E0;

