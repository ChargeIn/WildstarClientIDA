#include "../winhttp.h"

//----- (00000001406C5860) ----------------------------------------------------
char __fastcall sub_1406C5860(__int64 a1, unsigned int a2, int a3, unsigned __int8 a4)
{
	void(__fastcall * **v8)(_QWORD, __int64); // rdi
	int v10; // ebp
	bool v11; // zf
	__int64 v12; // rdx
	int v13; // eax
	int v14; // eax

	v8 = sub_1406C5440(a1);
	if (!v8)
		return 1;
	v10 = 0;
	if ((*(float(__fastcall**)(__int64))(*(_QWORD*)a1 + 72i64))(a1) > 0.0
		&& (*(float(__fastcall**)(__int64))(*(_QWORD*)a1 + 72i64))(a1) < 1.0)
	{
		(*(void(__fastcall**)(__int64, void*))(*(_QWORD*)(a1 + 1728) + 8i64))(a1 + 1728, &unk_1409F7624);
		if (*(float*)(a1 + 1752) != 0.0 || (float)1.0 != *(float*)(a1 + 1756))
		{
			v11 = *(float*)(a1 + 1744) == 0.0;
			*(_DWORD*)(a1 + 1752) = 0;
			if (v11)
				*(_DWORD*)(a1 + 1756) = 0;
			else
				*(float*)(a1 + 1756) = 1.0;
			*(_DWORD*)(a1 + 1736) = dword_140C636A8;
		}
	}
	switch (a2)
	{
	case 0x1Fu:
		v14 = dword_140C45E40;
		if (*(_DWORD*)qword_140C63750 < dword_140C45E40)
			v14 = *(_DWORD*)qword_140C63750;
		if (*((_BYTE*)&off_140C45E30 + v14 + 32))
			return sub_1401302C0(a1, a2, a3, a4);
		v12 = 2i64;
		goto LABEL_24;
	case 0x21u:
		v13 = dword_140C45E40;
		if (*(_DWORD*)qword_140C63750 < dword_140C45E40)
			v13 = *(_DWORD*)qword_140C63750;
		LOBYTE(v10) = *((_BYTE*)&off_140C45E30 + v13 + 32) != 0;
		(*v8)[8](v8, (unsigned int)(v10 + 1));
		return sub_1401302C0(a1, a2, a3, a4);
	case 0x22u:
		v12 = 0i64;
		goto LABEL_24;
	case 0x23u:
		v12 = 3i64;
	LABEL_24:
		(*v8)[8](v8, v12);
		break;
	}
	return sub_1401302C0(a1, a2, a3, a4);
}
// 140B7B510: using guessed type __int128 xmmword_140B7B510;
// 140C45E30: using guessed type __int64 (__fastcall *off_140C45E30)();
// 140C45E40: using guessed type int dword_140C45E40;
// 140C636A8: using guessed type int dword_140C636A8;
// 140C63750: using guessed type __int64 qword_140C63750;

