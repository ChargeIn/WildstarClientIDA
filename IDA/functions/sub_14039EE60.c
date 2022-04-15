#include "../winhttp.h"

//----- (000000014039EE60) ----------------------------------------------------
__int64 __fastcall sub_14039EE60(__int64 a1)
{
	int v1; // edx
	__int64 v2; // rdi
	int v4; // edx
	int v5; // edx
	int v6; // edx
	__int64 v7; // rax
	__int64 v8; // rax
	__int64 v9; // rsi
	unsigned __int64 v10; // rcx
	__int64 v11; // rcx
	int v12; // eax

	v1 = *(_DWORD*)(a1 + 26184);
	v2 = 0i64;
	if (v1 >= 11)
		return 0i64;
	v4 = v1 - 1;
	if (v4)
	{
		v5 = v4 - 2;
		if (!v5)
		{
		LABEL_6:
			v7 = sub_1405A5B90(a1, *(_DWORD*)(a1 + 26192));
		LABEL_13:
			v2 = v7;
			goto LABEL_14;
		}
		v6 = v5 - 1;
		if (v6)
		{
			if (v6 != 1)
				return 0i64;
			goto LABEL_6;
		}
	}
	else
	{
		v8 = sub_1403AC780(a1 + 160, (int*)(a1 + 26280));
		v9 = v8;
		if (v8 && (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v8 + 48i64))(v8) == *(_QWORD*)(a1 + 26288))
			v2 = sub_14056A030(v9);
	}
	v10 = *(unsigned int*)(a1 + 26272);
	if (v10 < *(_QWORD*)(a1 + 2712))
	{
		v11 = *(_QWORD*)(*(_QWORD*)(a1 + 2704) + 8 * v10);
		if (v11)
		{
			v7 = sub_1405A4B80(v11, 1);
			goto LABEL_13;
		}
	}
LABEL_14:
	if (v2)
	{
		v12 = *(_DWORD*)(*(_QWORD*)(v2 + 112) + 124i64);
		if (v12 == 4 || (unsigned int)(v12 - 7) <= 1)
			return 1i64;
	}
	return 0i64;
}

