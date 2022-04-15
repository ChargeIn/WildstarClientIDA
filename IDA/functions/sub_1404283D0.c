//----- (00000001404283D0) ----------------------------------------------------
void __fastcall sub_1404283D0(__int64 a1, unsigned int* a2)
{
	_QWORD* v2; // rdi
	__int64 v4; // r8
	unsigned __int64 v6; // rax
	__int64 v7; // rbx
	__int64 v8; // rax
	int v9; // eax
	unsigned int v10; // ecx
	int v11; // ebx
	_QWORD* v12; // rax
	__int64 v13; // rdx
	int v14; // r10d
	__int64 v15; // rdx
	int v16; // [rsp+20h] [rbp-38h]
	__int64(__fastcall * *v17)(); // [rsp+30h] [rbp-28h] BYREF
	int v18; // [rsp+38h] [rbp-20h]
	_QWORD* v19; // [rsp+40h] [rbp-18h]
	int v20; // [rsp+48h] [rbp-10h]

	v2 = *(_QWORD**)(a1 + 400);
	v4 = v2[4];
	v17 = off_140B569F0;
	v6 = *(_QWORD*)(v4 + 112);
	v19 = v2;
	v20 = 1;
	if (*(_QWORD*)(v4 + 120) >= v6)
		sub_14005E2C0((__int64)v2);
	v7 = v2[2];
	v8 = sub_14005C1B0((__int64)v2, 0, 0);
	*(_DWORD*)(v7 + 8) = 5;
	*(_QWORD*)v7 = v8;
	v2[2] += 16i64;
	v9 = sub_1400578C0((__int64)v2);
	v10 = *a2;
	v11 = v9;
	v18 = v9;
	if (v10 - 1 <= 6)
	{
		if ((unsigned int)sub_1406B9790(v2, a2[2]))
		{
			sub_1400FB540((__int64)&v17);
			v2[2] -= 16i64;
		}
		v12 = sub_14005C3C0(*(_QWORD*)(v2[4] + 160i64), v11);
		v13 = v2[2];
		*(_QWORD*)v13 = *v12;
		*(_DWORD*)(v13 + 8) = *((_DWORD*)v12 + 2);
		v2[2] += 16i64;
		sub_1400F06F0((__int64)v2, v13, L"nGain", v14);
		v2[2] -= 16i64;
	}
	v16 = v11;
	sub_1400EA3E0(a1, "ChannelUpdate_Progress", byte_1409EAD6C, *a2, v16);
	sub_1400579E0((__int64)v2, v15, v11);
}
// 1404284B4: variable 'v14' is possibly undefined
// 1404284F5: variable 'v15' is possibly undefined
// 1409EAD6C: using guessed type _BYTE byte_1409EAD6C[64];
// 140B00BD8: using guessed type wchar_t aNgain[6];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

