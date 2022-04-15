//----- (00000001405F8630) ----------------------------------------------------
void __fastcall sub_1405F8630(__int64 a1, unsigned int* a2, __int64 a3, unsigned int a4, int a5)
{
	__int64* v8; // r15
	__int64 v9; // rbx
	__int64 v10; // rcx
	__int64 v11; // rdi
	__int64 v12; // rax
	int v13; // eax
	__int64 v14; // rdx
	int v15; // edi
	__int64 v16; // rax
	__int64 v17; // rdx
	__int64(__fastcall * *v18)(); // [rsp+20h] [rbp-48h] BYREF
	int v19; // [rsp+28h] [rbp-40h]
	__int64 v20; // [rsp+30h] [rbp-38h]
	int v21; // [rsp+38h] [rbp-30h]

	v8 = (__int64*)sub_140498A40(qword_140C65980, a4, 0);
	if (v8 && a3)
	{
		do
		{
			v9 = *(_QWORD*)(a1 + 16);
			v18 = off_140B569F0;
			v21 = 1;
			v10 = *(_QWORD*)(v9 + 32);
			v20 = v9;
			if (*(_QWORD*)(v10 + 120) >= *(_QWORD*)(v10 + 112))
				sub_14005E2C0(v9);
			v11 = *(_QWORD*)(v9 + 16);
			v12 = sub_14005C1B0(v9, 0, 0);
			*(_DWORD*)(v11 + 8) = 5;
			*(_QWORD*)v11 = v12;
			*(_QWORD*)(v9 + 16) += 16i64;
			v13 = sub_1400578C0(v9);
			v14 = *v8;
			v15 = v13;
			v19 = v13;
			v16 = (*(__int64(__fastcall**)(__int64*))(v14 + 24))(v8);
			if ((unsigned int)sub_1405F1250((__int64)&v18, a2, v16, a5))
				sub_1400FB1D0(a1);
			sub_1400579E0(v9, v17, v15);
			a2 += 49;
			--a3;
		} while (a3);
	}
}
// 1405F871B: variable 'v17' is possibly undefined
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65980: using guessed type __int64 qword_140C65980;

