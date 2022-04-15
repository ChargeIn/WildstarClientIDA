//----- (00000001405F8760) ----------------------------------------------------
void __fastcall sub_1405F8760(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
	__int64* v7; // r15
	__int64 v8; // rbx
	__int64 v9; // rcx
	__int64 v10; // rdi
	__int64 v11; // rax
	int v12; // eax
	__int64 v13; // rdx
	int v14; // edi
	__int64 v15; // rax
	__int64 v16; // rdx
	__int64(__fastcall * *v17)(); // [rsp+20h] [rbp-38h] BYREF
	int v18; // [rsp+28h] [rbp-30h]
	__int64 v19; // [rsp+30h] [rbp-28h]
	int v20; // [rsp+38h] [rbp-20h]

	v7 = (__int64*)sub_140498A40(qword_140C65980, a4, 0);
	if (v7 && a3)
	{
		do
		{
			v8 = *(_QWORD*)(a1 + 16);
			v17 = off_140B569F0;
			v20 = 1;
			v9 = *(_QWORD*)(v8 + 32);
			v19 = v8;
			if (*(_QWORD*)(v9 + 120) >= *(_QWORD*)(v9 + 112))
				sub_14005E2C0(v8);
			v10 = *(_QWORD*)(v8 + 16);
			v11 = sub_14005C1B0(v8, 0, 0);
			*(_DWORD*)(v10 + 8) = 5;
			*(_QWORD*)v10 = v11;
			*(_QWORD*)(v8 + 16) += 16i64;
			v12 = sub_1400578C0(v8);
			v13 = *v7;
			v14 = v12;
			v18 = v12;
			v15 = (*(__int64(__fastcall**)(__int64*))(v13 + 24))(v7);
			if ((unsigned int)sub_1405F0F90((__int64)&v17, a2, v15, 0))
				sub_1400FB1D0(a1);
			sub_1400579E0(v8, v16, v14);
			a2 += 224i64;
			--a3;
		} while (a3);
	}
}
// 1405F883E: variable 'v16' is possibly undefined
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65980: using guessed type __int64 qword_140C65980;

