#include "../winhttp.h"

//----- (000000014046B1E0) ----------------------------------------------------
void __fastcall sub_14046B1E0(__int64 a1, __int64 a2, __int64 a3)
{
	int* v5; // rbx
	unsigned int v6; // r15d
	__int64 i; // rax
	int v8; // ebp
	__int64 v9; // rsi
	unsigned int* j; // r14
	__int64 v11; // rax
	int* v12; // rdi
	int v13; // ebx
	double v14; // xmm0_8
	int v15; // ebx
	__int64 v16; // [rsp+20h] [rbp-88h]
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-78h] BYREF
	__int128 v18; // [rsp+38h] [rbp-70h]
	__int64(__fastcall * *v19)(); // [rsp+50h] [rbp-58h] BYREF
	__int128 v20; // [rsp+58h] [rbp-50h]
	int* v21; // [rsp+B8h] [rbp+10h]
	__int64 v22; // [rsp+C8h] [rbp+20h] BYREF

	if (!a2 || a3 && !*(_DWORD*)(a3 + 400))
		return;
	v5 = *(int**)(a2 + 56);
	v21 = v5;
	if (!v5)
		return;
	v6 = **(_DWORD**)(a2 + 112);
	for (i = *(_QWORD*)(a1 + 5640); i; i = *(_QWORD*)(i + 136))
	{
		if (*(_DWORD*)(i + 8) == v6)
			return;
	}
	if (!a3 || (v8 = *(_DWORD*)(a3 + 436), v8 == -1))
	{
		v8 = *v5;
		if ((unsigned int)sub_1404823C0(a2))
			v8 = (int)(float)((float)v8 * *(float*)(a1 + 2564));
	}
	sub_14046A3D0(a1, 1, v6, v6, v8);
	v9 = 0i64;
	for (j = (unsigned int*)(v5 + 1); !*j; ++j)
	{
	LABEL_20:
		if ((unsigned __int64)++v9 >= 3)
			return;
	}
	v11 = sub_14023DC80(*j);
	v12 = (int*)v11;
	if (v11)
	{
		v13 = *(_DWORD*)(v11 + 4);
		if ((unsigned int)sub_1404823C0(a2))
		{
			if (v13)
			{
				v14 = sub_140466A70(a1, 0x88u);
				v13 = (int)(float)(*(float*)&v14 * (float)v13);
			}
			else
			{
				v13 = v8;
			}
		}
		sub_14046A3D0(a1, 2, v6, *v12, v13);
		goto LABEL_20;
	}
	*(_QWORD*)&v18 = 0i64;
	TlsValue = &off_140B5E648;
	*((_QWORD*)&v18 + 1) = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &TlsValue);
	v22 = 0x141E02AB0i64;
	v19 = TlsValue;
	v20 = v18;
	LODWORD(v16) = v21[v9 + 1];
	v15 = sub_1401971E0(&dword_140C8ACE4, 5, &v22, v6, v16, &v19);
	TlsValue = &off_140B5E648;
	TlsSetValue(dwTlsIndex, *((LPVOID*)&v18 + 1));
	if (v15)
		DebugBreak();
}
// 14046B281: conditional instruction was optimized away because rbx.8!=0
// 14046B3DD: variable 'v16' is possibly undefined
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8ACE4: using guessed type _DWORD dword_140C8ACE4;

