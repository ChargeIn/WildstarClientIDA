#include "../winhttp.h"

//----- (00000001400C41E0) ----------------------------------------------------
__int64 __fastcall sub_1400C41E0(__int64 a1)
{
	__int64 v2; // rcx
	__int64 result; // rax

	*(_BYTE*)(a1 + 828) &= 3u;
	*(_BYTE*)(a1 + 830) &= ~1u;
	*(_BYTE*)(a1 + 828) |= 0x10u;
	*(_BYTE*)(a1 + 829) = 0;
	*(_QWORD*)(a1 + 816) = 1048576000i64;
	*(_DWORD*)(a1 + 824) = 1056964608;
	*(_DWORD*)(a1 + 712) = 0;
	*(_QWORD*)(a1 + 704) = 0i64;
	*(_DWORD*)(a1 + 800) = 5;
	*(_DWORD*)(a1 + 804) = 5;
	*(_BYTE*)(a1 + 412) &= 3u;
	*(_BYTE*)(a1 + 412) |= 0x10u;
	*(_BYTE*)(a1 + 414) &= ~1u;
	*(_BYTE*)(a1 + 413) = 0;
	*(_DWORD*)(a1 + 296) = 0;
	*(_QWORD*)(a1 + 400) = 1048576000i64;
	*(_DWORD*)(a1 + 408) = 1056964608;
	*(_QWORD*)(a1 + 288) = 0i64;
	*(_DWORD*)(a1 + 384) = 5;
	*(_DWORD*)(a1 + 388) = 5;
	v2 = *(_QWORD*)(a1 + 1248);
	if (v2)
	{
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		*(_QWORD*)(a1 + 1248) = 0i64;
	}
	*(_BYTE*)(a1 + 1244) &= 3u;
	*(_BYTE*)(a1 + 1246) &= ~1u;
	*(_BYTE*)(a1 + 1244) |= 0x10u;
	*(_BYTE*)(a1 + 1245) = 0;
	*(_DWORD*)(a1 + 1128) = 0;
	*(_QWORD*)(a1 + 1232) = 1048576000i64;
	*(_DWORD*)(a1 + 1240) = 1056964608;
	*(_QWORD*)(a1 + 1120) = 0i64;
	*(_DWORD*)(a1 + 1216) = 5;
	*(_DWORD*)(a1 + 1220) = 5;
	*(_BYTE*)(a1 + 1392) &= 0xE9u;
	*(_QWORD*)(a1 + 1300) = 0i64;
	*(_DWORD*)(a1 + 1296) = 0;
	*(_DWORD*)(a1 + 1308) = 1;
	*(_DWORD*)(a1 + 1332) = 0;
	return result;
}

