#include "../winhttp.h"

//----- (0000000140503E80) ----------------------------------------------------
__int64 __fastcall sub_140503E80(__int64 a1, _QWORD* a2)
{
	__int64 v2; // r10
	__int64 v3; // rax
	__int64 v4; // r8
	__int64 v5; // rax
	__int64 v6; // rax
	__int64 v7; // rax
	__int64 v8; // rax
	int v10; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-48h] BYREF
	__int128 v12; // [rsp+28h] [rbp-40h]
	__int64(__fastcall * *v13)(); // [rsp+40h] [rbp-28h] BYREF
	__int128 v14; // [rsp+48h] [rbp-20h]
	__int64 v15; // [rsp+70h] [rbp+8h] BYREF

	v2 = 0i64;
	if (*(_BYTE*)(a1 + 40))
	{
		v3 = a1 + 80;
		if (*(_DWORD*)(a1 + 80) == 1)
		{
			v4 = 1i64;
			while (!*(_BYTE*)(v3 + 48) || *(_DWORD*)(v3 + 88) > *(_DWORD*)v3)
			{
				++v4;
				v3 += 88i64;
				if (v4 >= 4)
				{
					if (*(_BYTE*)(a1 + 304))
					{
						v5 = *(int*)(a1 + 344);
						if ((int)v5 > 0)
							v2 = v5 * a2[3];
					}
					if (*(_BYTE*)(a1 + 216))
					{
						v6 = *(int*)(a1 + 256);
						if ((int)v6 > 0)
							v2 += v6 * a2[2];
					}
					if (*(_BYTE*)(a1 + 128))
					{
						v7 = *(int*)(a1 + 168);
						if ((int)v7 > 0)
							v2 += v7 * a2[1];
					}
					if (*(_BYTE*)(a1 + 40))
					{
						v8 = *(int*)(a1 + 80);
						if ((int)v8 > 0)
							v2 += *a2 * v8;
					}
					return v2;
				}
			}
		}
	}
	*(_QWORD*)&v12 = 0i64;
	TlsValue = &off_140B5E648;
	*((_QWORD*)&v12 + 1) = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &TlsValue);
	v13 = TlsValue;
	v15 = 0x141E0A570i64;
	v14 = v12;
	v10 = sub_140196F30(&dword_140C8AD68, 13, &v15, &v13);
	TlsValue = &off_140B5E648;
	TlsSetValue(dwTlsIndex, *((LPVOID*)&v12 + 1));
	if (v10)
		DebugBreak();
	return 0i64;
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8AD68: using guessed type _DWORD dword_140C8AD68;

