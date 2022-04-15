#include "../winhttp.h"

//----- (0000000140474400) ----------------------------------------------------
void __fastcall sub_140474400(_DWORD* a1, unsigned int a2, int a3)
{
	__int64 v6; // rax
	__int64 v7; // rdi
	unsigned int v8; // ecx
	__int64 v9; // rax
	__int64 v10; // rax
	__int64 v11; // rcx
	unsigned int v12; // esi
	unsigned int v13; // eax
	int v14; // eax
	__int64 v15; // rax
	int v16; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-50h] BYREF
	__int64 v18; // [rsp+38h] [rbp-48h]
	LPVOID lpTlsValue; // [rsp+40h] [rbp-40h]
	__int64(__fastcall * *v20)(); // [rsp+50h] [rbp-30h] BYREF
	__int64 v21; // [rsp+58h] [rbp-28h]
	LPVOID v22; // [rsp+60h] [rbp-20h]
	__int64 v23; // [rsp+68h] [rbp-18h]
	int v24; // [rsp+70h] [rbp-10h]
	__int64 v25; // [rsp+A0h] [rbp+20h] BYREF

	v6 = sub_1401FDBE0(a2);
	v7 = v6;
	if (!v6)
		goto LABEL_5;
	if (!*(_DWORD*)(v6 + 56))
		goto LABEL_6;
	if ((*(_BYTE*)(v6 + 92) & 1) != 0)
		a1[1221] = 1;
	else
		LABEL_5:
	a1[1221] = 0;
LABEL_6:
	if ((!v6 || *(_DWORD*)(v6 + 56)) && a1[117] && (a3 || a1[119] != a2))
	{
		v8 = a1[119];
		if (v8)
		{
			v9 = sub_1401FDBE0(v8);
			v10 = sub_140248F00(*(_DWORD*)(v9 + 88));
			if (v10)
			{
				if ((*(_DWORD*)(v10 + 88) & 0x200) != 0)
					sub_1404742E0((__int64)a1);
			}
		}
		sub_140578050((__int64*)qword_140C65B78, a1[117], 1);
		a1[117] = 0;
		a1[119] = 0;
	}
	a1[120] = 0;
	if (v7)
	{
		v11 = *(unsigned int*)(v7 + 88);
		if ((_DWORD)v11)
		{
			if (a2 != a1[119])
			{
				v12 = 0;
				if (*(_DWORD*)(v7 + 56))
				{
					if (a1[110] == 7 && (unsigned int)sub_1403DEEC0(v11, a1[111], a1[116], a1[115], &v25))
					{
						a1[120] = 1;
						return;
					}
					v13 = sub_140579A90();
					a1[119] = a2;
					v12 = v13;
					a1[117] = v13;
					goto LABEL_24;
				}
				v15 = sub_140248F00(v11);
				if (!v15 || (*(_BYTE*)(v15 + 88) & 4) == 0)
				{
				LABEL_24:
					v20 = 0i64;
					v21 = 0i64;
					v22 = 0i64;
					v23 = 0i64;
					v24 = 0;
					HIDWORD(v20) = a1[2];
					v14 = *(_DWORD*)(v7 + 88);
					LODWORD(v20) = v12;
					LODWORD(v21) = v14;
					sub_140577660(qword_140C65B78, &v20);
					return;
				}
				v18 = 0i64;
				TlsValue = &off_140B5E648;
				lpTlsValue = TlsGetValue(dwTlsIndex);
				TlsSetValue(dwTlsIndex, &TlsValue);
				v20 = TlsValue;
				v25 = 0x141E02730i64;
				v21 = v18;
				v22 = lpTlsValue;
				v16 = sub_1401971E0(&dword_140C8ACCC, 22, &v25, a2, &v20);
				TlsValue = &off_140B5E648;
				TlsSetValue(dwTlsIndex, lpTlsValue);
				if (v16)
					DebugBreak();
			}
		}
	}
}
// 140474454: conditional instruction was optimized away because eax.4!=0
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C65B78: using guessed type __int64 qword_140C65B78;
// 140C8ACCC: using guessed type _DWORD dword_140C8ACCC;

