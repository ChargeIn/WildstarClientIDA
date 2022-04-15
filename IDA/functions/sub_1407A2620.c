#include "../winhttp.h"

//----- (00000001407A2620) ----------------------------------------------------
void __fastcall sub_1407A2620(int a1, float a2, float* a3)
{
	__int64 v3; // r9
	unsigned int v4; // ecx
	__int64 v6; // rdx
	__int64 v7; // rax
	__int64 v8; // r9
	unsigned int v9; // eax
	int v10; // r8d
	int v11; // r8d
	int v12; // r8d
	int v13; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-48h] BYREF
	__int128 v15; // [rsp+38h] [rbp-40h]
	__int64(__fastcall * *v16)(); // [rsp+50h] [rbp-28h] BYREF
	__int128 v17; // [rsp+58h] [rbp-20h]
	__int64 v18; // [rsp+90h] [rbp+18h] BYREF

	v3 = a1;
	v4 = *((_DWORD*)a3 + 4);
	v6 = qword_140C7F7B8;
	v7 = *(_QWORD*)(qword_140C7F7B8 + 8);
	if (!v7)
		goto LABEL_8;
	do
	{
		if (*(_DWORD*)(v7 + 32) < v4)
		{
			v7 = *(_QWORD*)(v7 + 24);
		}
		else
		{
			v6 = v7;
			v7 = *(_QWORD*)(v7 + 16);
		}
	} while (v7);
	if (v6 == qword_140C7F7B8 || (v18 = v6, v4 < *(_DWORD*)(v6 + 32)))
		LABEL_8:
	v18 = qword_140C7F7B8;
	switch ((int)v3)
	{
	case 0:
		*((_DWORD*)a3 + 3) = (int)a2;
		return;
	case 1:
		*((_DWORD*)a3 + 5) = (int)a2;
		if (!(int)a2 || (int)a2 >= 4)
		{
			v8 = *(unsigned int*)a3;
			v9 = *((_DWORD*)a3 + 1);
			v18 = 0x141E4C280i64;
			sub_1401A3130(79, 0, &v18, v8, v9, (int)a2);
			*((_DWORD*)a3 + 5) = 1;
		}
		return;
	case 2:
		*((_DWORD*)a3 + 8) = (int)a2;
		return;
	case 3:
		*((_DWORD*)a3 + 9) = (int)a2;
		return;
	case 4:
		*((_DWORD*)a3 + 14) = (int)a2;
		return;
	case 5:
		*((_DWORD*)a3 + 15) = (int)a2;
		return;
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
	case 11:
		v10 = *(_DWORD*)(v18 + 4 * v3 + 16);
		if (!v10)
			goto LABEL_22;
		v11 = v10 - 1;
		if (v11)
		{
			v12 = v11 - 1;
			if (v12)
			{
				if (v12 == 1)
					LABEL_22:
				a3[(int)v3 + 10] = a2;
			}
			else
			{
				LODWORD(a3[(int)v3 + 10]) = (int)a2;
			}
		}
		else
		{
			LODWORD(a3[(int)v3 + 10]) = (int)a2;
		}
		return;
	case 16:
		*((_DWORD*)a3 + 12) = (int)a2;
		return;
	case 17:
		*((_DWORD*)a3 + 13) = (int)a2;
		return;
	case 18:
		a3[28] = a2;
		return;
	default:
		TlsValue = &off_140B5E648;
		*(_QWORD*)&v15 = 0i64;
		*((_QWORD*)&v15 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v16 = TlsValue;
		v18 = 0x141E4C220i64;
		v17 = v15;
		v13 = sub_1401971E0(dword_140C8B170, 24, &v18, &v16);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v15 + 1));
		if (v13)
			DebugBreak();
		return;
	}
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C7F7B8: using guessed type __int64 qword_140C7F7B8;
// 140C8B170: using guessed type _DWORD dword_140C8B170[3];

