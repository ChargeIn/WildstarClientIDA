#include "../winhttp.h"

//----- (0000000140724B70) ----------------------------------------------------
void __fastcall sub_140724B70(unsigned int* a1, unsigned int a2)
{
	__int64 v4; // rax
	int v5; // eax
	__int64 v6; // rsi
	__int64 v7; // r8
	__int64* v8; // rcx
	__int64 v9; // rax
	__int64 v10; // rcx
	__int64 v11; // rdx
	__int64 v12; // r8
	__int64 v13; // rax
	int v14; // eax

	v4 = sub_140207D60(a1[27]);
	if (!v4)
		goto LABEL_12;
	v5 = *(_DWORD*)(v4 + 24);
	if ((v5 & 0x40) == 0 && (v5 & 0x100) == 0)
		goto LABEL_12;
	v6 = *(_QWORD*)(qword_140C65898 + 25744);
	if (!v6)
		goto LABEL_12;
	v7 = sub_1405B16C0((__int64)&qword_140C7DFB0, *(_DWORD*)(v6 + 6120), 1);
	if (!v7)
		v7 = sub_1405B15C0((__int64)&qword_140C7DFB0, *(_DWORD*)(v6 + 6124));
	v8 = (__int64*)xmmword_140C7DFC0;
	if ((_QWORD)xmmword_140C7DFC0 == *((_QWORD*)&xmmword_140C7DFC0 + 1))
	{
	LABEL_10:
		v9 = 0i64;
	}
	else
	{
		while (1)
		{
			v9 = *v8;
			if (*(_DWORD*)(*v8 + 188) == a2)
				break;
			if (++v8 == *((__int64**)&xmmword_140C7DFC0 + 1))
				goto LABEL_10;
		}
	}
	if (v7 == v9)
	{
	LABEL_12:
		v10 = *(_QWORD*)(qword_140C659F0 + 824);
		v11 = *(_QWORD*)(v10 + 16);
		v12 = *(_QWORD*)(v10 + 24);
		if (v11 != v12)
		{
			while (*(_DWORD*)(*(_QWORD*)v11 + 188i64) != a2)
			{
				v11 += 8i64;
				if (v11 == v12)
					return;
			}
			if (*(_QWORD*)v11)
			{
				v13 = sub_140207D60(a1[27]);
				if (v13 && ((v14 = *(_DWORD*)(v13 + 24), (v14 & 0x340) == 0) || v14 == a1[29]) && (v14 & 0x342) != 0)
					sub_140724FC0((__int64)a1, a2);
				else
					sub_140725560(a1);
			}
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659F0: using guessed type __int64 qword_140C659F0;
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;
// 140C7DFC0: using guessed type __int128 xmmword_140C7DFC0;

