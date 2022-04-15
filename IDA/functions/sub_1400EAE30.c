//----- (00000001400EAE30) ----------------------------------------------------
void __fastcall sub_1400EAE30(__int64 a1, __int64 a2, int* a3)
{
	__int64 v4; // rsi
	__int64 v5; // rdx
	unsigned __int64 v6; // rcx
	__int64 v7; // rbx
	__int64 v8; // rax
	unsigned int v9; // ebx
	int v10; // r14d
	unsigned __int64 v11; // rbp
	__int64 v12; // rsi
	__int64 v13; // rax
	__int64* v14; // rax
	__int64 v15; // r8
	__int64 v16; // rdx
	__int64 v17; // [rsp+20h] [rbp-38h] BYREF
	unsigned __int64 v18; // [rsp+28h] [rbp-30h]
	__int64(__fastcall * *v19)(); // [rsp+30h] [rbp-28h] BYREF
	int v20; // [rsp+38h] [rbp-20h]
	__int64 v21; // [rsp+40h] [rbp-18h]
	int v22; // [rsp+48h] [rbp-10h]

	v4 = sub_14013A630(a1 + 2496, a3);
	if (v4)
	{
		v5 = *(_QWORD*)(a2 + 32);
		v6 = *(_QWORD*)(v5 + 112);
		v19 = off_140B569F0;
		v21 = a2;
		v22 = 1;
		if (*(_QWORD*)(v5 + 120) >= v6)
			sub_14005E2C0(a2);
		v7 = *(_QWORD*)(a2 + 16);
		v8 = sub_14005C1B0(a2, 0, 0);
		*(_DWORD*)(v7 + 8) = 5;
		*(_QWORD*)v7 = v8;
		*(_QWORD*)(a2 + 16) += 16i64;
		v9 = 0;
		v10 = sub_1400578C0(a2);
		v20 = v10;
		v18 = 0i64;
		v17 = 0i64;
		sub_140137E60(v4, &v17);
		v11 = v18;
		v12 = v17;
		if (v18)
		{
			v13 = 0i64;
			do
			{
				if (*(_DWORD*)(v12 + 4 * v13) != -2)
					sub_1400FB1D0((__int64)&v19);
				v13 = ++v9;
			} while (v9 < v11);
			a2 = v21;
			v10 = v20;
		}
		v14 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a2 + 32) + 160i64), v10);
		v15 = *(_QWORD*)(a2 + 16);
		v16 = *v14;
		*(_QWORD*)v15 = *v14;
		*(_DWORD*)(v15 + 8) = *((_DWORD*)v14 + 2);
		*(_QWORD*)(a2 + 16) += 16i64;
		if (v12)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v12 - 16) + 8i64))(v12 - 16);
		sub_1400579E0(a2, v16, v10);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a2 + 16) + 8i64) = 0;
		*(_QWORD*)(a2 + 16) += 16i64;
	}
}
// 1400EAF6D: variable 'v16' is possibly undefined
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

