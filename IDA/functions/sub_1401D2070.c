#include "../winhttp.h"

//----- (00000001401D2070) ----------------------------------------------------
signed int __fastcall sub_1401D2070(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
	__int64 v5; // rbp
	signed int result; // eax
	int* v10; // rax
	int v11; // eax
	__int64 v12; // r9
	__int64 v13; // rdx
	DWORD v14; // eax
	__int64 v15; // r10
	__int64 v16; // rcx
	int v17; // eax
	unsigned int v18; // eax
	__int64 v19; // rax
	int v20; // eax
	_QWORD* v21; // rcx

	v5 = a4;
	if (!*(_QWORD*)(a1 + 744))
		return -1610416122;
	if (!*(_QWORD*)(a1 + 840))
	{
		v10 = sub_14018B280(*(unsigned int*)(a1 + 848), 9u);
		*(_QWORD*)(a1 + 840) = v10;
		if (!v10)
			return -2147024882;
	}
	if (*(_QWORD*)(a1 + 792))
	{
		if (a2 >= *(unsigned int*)(a1 + 780))
			goto LABEL_11;
		if (a1 != -752)
		{
			v19 = *(_QWORD*)(a1 + 792);
			if (v19)
			{
				*(_QWORD*)(v19 + 44) = 0i64;
				*(_DWORD*)(v19 + 52) = 0;
				v20 = sub_1401ABAA0(a1 + 752);
				if (v20 == -4)
					return -2147024882;
				if (!v20)
				{
					*v21 = v12;
					goto LABEL_10;
				}
			}
		}
		return -2147467259;
	}
	v11 = sub_1401ABBC0((_QWORD*)(a1 + 752), a2, "1.2.8");
	if (v11 == -4)
		return -2147024882;
	if (v11)
		return -2147467259;
	LODWORD(v12) = 0;
	*(_QWORD*)(a1 + 752) = 0i64;
LABEL_10:
	*(_DWORD*)(a1 + 760) = v12;
LABEL_11:
	*(_QWORD*)(a1 + 600) = 0i64;
	*(_QWORD*)(a1 + 608) = 0i64;
	*(_QWORD*)(a1 + 616) = 0i64;
	*(_QWORD*)(a1 + 624) = 0i64;
	*(_QWORD*)(a1 + 632) = 0i64;
	*(_QWORD*)(a1 + 640) = 0i64;
	*(_QWORD*)(a1 + 648) = 0i64;
	*(_QWORD*)(a1 + 656) = 0i64;
	v13 = *(unsigned int*)(a1 + 764);
	*(_QWORD*)(a1 + 632) = a5;
	v14 = *(_DWORD*)(a1 + 760);
	*(_QWORD*)(a1 + 616) = v13;
	*(_QWORD*)(a1 + 640) = a2;
	*(_QWORD*)(a1 + 648) = a3;
	*(_DWORD*)(a1 + 656) = v5;
	if (v14 || !(_DWORD)v5)
	{
		if (PostQueuedCompletionStatus(**(HANDLE**)(a1 + 16), v14, 1ui64, (LPOVERLAPPED)(a1 + 600)))
			return 0;
		result = GetLastError();
		if (result > 0)
			return (unsigned __int16)result | 0x80070000;
	}
	else
	{
		v15 = *(_QWORD*)(a1 + 840);
		v16 = v5 - *(unsigned int*)(a1 + 780);
		*(_QWORD*)(a1 + 752) = v15;
		v17 = (((v16 + a2 + 1) >> 1) + 4095) & 0xFFFFF000;
		*(_DWORD*)(a1 + 760) = v17;
		if ((unsigned __int64)(unsigned int)(v13 + v17) > *(_QWORD*)(a1 + 712))
			*(_DWORD*)(a1 + 760) = *(_DWORD*)(a1 + 712) - v13;
		v18 = *(_DWORD*)(a1 + 848);
		if (*(_DWORD*)(a1 + 760) > v18)
			*(_DWORD*)(a1 + 760) = v18;
		result = (*(__int64(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 744) + 32i64))(
			*(_QWORD*)(a1 + 744),
			v15,
			*(unsigned int*)(a1 + 760));
		if (result >= 0)
			return 0;
	}
	return result;
}
// 1401D20F6: variable 'a2' is possibly undefined
// 1401D2116: variable 'v12' is possibly undefined
// 1401D225F: variable 'v21' is possibly undefined

