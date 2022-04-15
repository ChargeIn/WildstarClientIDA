//----- (000000014052F7B0) ----------------------------------------------------
__int64 __fastcall sub_14052F7B0(_QWORD* a1)
{
	__int64 v1; // rdi
	__int64 result; // rax
	__int64 v3; // rcx
	unsigned __int64 v4; // rax
	__int64 v5; // rbx
	__int64 v6; // rax
	int v7; // esi
	unsigned __int64 v8; // r15
	unsigned __int64 v9; // rbp
	__int64 v10; // r14
	__int64 v11; // rbx
	__int64 v12; // rsi
	__int64 v13; // rcx
	unsigned __int64 v14; // rax
	__int64 v15; // rbx
	__int64 v16; // rax
	int v17; // ebx
	__int64 v18; // rdx
	_QWORD* v19; // rax
	__int64 v20; // r8
	__int64 v21; // rdx
	__int64(__fastcall * *v22)(); // [rsp+20h] [rbp-68h] BYREF
	int v23; // [rsp+28h] [rbp-60h]
	__int64 v24; // [rsp+30h] [rbp-58h]
	int v25; // [rsp+38h] [rbp-50h]
	__int64(__fastcall * *v26)(); // [rsp+40h] [rbp-48h] BYREF
	int v27; // [rsp+48h] [rbp-40h]
	__int64 v28; // [rsp+50h] [rbp-38h]
	int v29; // [rsp+58h] [rbp-30h]

	v1 = (__int64)a1;
	result = sub_14052E9B0(a1);
	if (result)
	{
		v3 = *(_QWORD*)(v1 + 32);
		v4 = *(_QWORD*)(v3 + 112);
		v24 = v1;
		v25 = 1;
		v22 = off_140B569F0;
		if (*(_QWORD*)(v3 + 120) >= v4)
			sub_14005E2C0(v1);
		v5 = *(_QWORD*)(v1 + 16);
		v6 = sub_14005C1B0(v1, 0, 0);
		*(_DWORD*)(v5 + 8) = 5;
		*(_QWORD*)v5 = v6;
		*(_QWORD*)(v1 + 16) += 16i64;
		v7 = sub_1400578C0(v1);
		v23 = v7;
		if (qword_140C658F8)
			v8 = *(unsigned int*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(qword_140C658F8 + 64) + 32i64))(*(_QWORD*)(qword_140C658F8 + 64))
			/ 0x30ui64;
		else
			v8 = 0i64;
		v9 = 0i64;
		if (v8)
		{
			v10 = 0i64;
			do
			{
				v11 = qword_140C658F8;
				if (qword_140C658F8
					&& *(_QWORD*)(qword_140C658F8 + 8)
					&& v9 < *(unsigned int*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(qword_140C658F8 + 64) + 32i64))(*(_QWORD*)(qword_140C658F8 + 64))
					/ 0x30ui64)
				{
					v12 = v10 + *(_QWORD*)(v11 + 8);
				}
				else
				{
					v12 = 0i64;
				}
				if (v12 && !(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v12 + 32i64))(v12))
				{
					v13 = *(_QWORD*)(v1 + 32);
					v26 = off_140B569F0;
					v28 = v1;
					v14 = *(_QWORD*)(v13 + 112);
					v29 = 1;
					if (*(_QWORD*)(v13 + 120) >= v14)
						sub_14005E2C0(v1);
					v15 = *(_QWORD*)(v1 + 16);
					v16 = sub_14005C1B0(v1, 0, 0);
					*(_DWORD*)(v15 + 8) = 5;
					*(_QWORD*)v15 = v16;
					*(_QWORD*)(v1 + 16) += 16i64;
					v17 = sub_1400578C0(v1);
					v27 = v17;
					if ((int)sub_14052ED60(v12, (__int64)&v26) >= 0)
						sub_1400FB1D0((__int64)&v22);
					sub_1400579E0(v1, v18, v17);
				}
				++v9;
				v10 += 80i64;
			} while (v9 < v8);
			v1 = v24;
			v7 = v23;
		}
		v19 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v7);
		v20 = *(_QWORD*)(v1 + 16);
		*(_QWORD*)v20 = *v19;
		v21 = *((unsigned int*)v19 + 2);
		*(_DWORD*)(v20 + 8) = v21;
		*(_QWORD*)(v1 + 16) += 16i64;
		sub_1400579E0(v1, v21, v7);
		return 1i64;
	}
	return result;
}
// 14052F968: variable 'v18' is possibly undefined
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C658F8: using guessed type __int64 qword_140C658F8;

