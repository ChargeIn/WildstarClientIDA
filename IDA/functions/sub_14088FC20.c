//----- (000000014088FC20) ----------------------------------------------------
void __fastcall sub_14088FC20(__int64 a1, __int64 a2, char a3)
{
	__int128 v3; // xmm0
	__int64* v7; // rax
	_QWORD* v8; // r14
	__int128 v9; // xmm6
	__int64 v10; // rax
	__int64 v11; // rbp
	__int64 v12; // rcx
	__int64 v13; // rdi
	_QWORD* v14; // rax
	__int64 v15; // rdi
	__int64 v16; // rdx
	__int64 v17; // rcx
	char v18; // bp
	__int64 v19; // rdi
	__int64 v20; // rdx
	__int64 v21; // r9
	__int64 v22; // rax
	__int128 v23; // [rsp+20h] [rbp-38h] BYREF

	v3 = *(_OWORD*)(a2 + 264);
	if (*(_QWORD*)(a2 + 264))
	{
		v23 = *(_OWORD*)(a2 + 264);
		v7 = *(__int64**)v3;
		*(_QWORD*)&v23 = v7;
		if (!v7)
		{
			*(_QWORD*)(a2 + 264) = 0i64;
			return;
		}
	}
	else
	{
		v8 = *(_QWORD**)(a1 + 128);
		*((_QWORD*)&v23 + 1) = a1;
		*(_QWORD*)&v23 = v8;
		v9 = v23;
		if (!v8)
			return;
		if (!*(_BYTE*)(a2 + 299))
		{
			v10 = *(_QWORD*)(a1 + 104);
			v11 = *(_QWORD*)(a1 + 112);
			v12 = *(_QWORD*)(a1 + 16);
			v13 = *(_QWORD*)(v10 + 8);
			if (v12)
				v11 += sub_14088C230(v12);
			v14 = (_QWORD*)*v8;
			v15 = v13 - v11;
			*(_QWORD*)&v23 = v14;
			if (v14)
			{
				v16 = *(unsigned int*)(a1 + 144);
				do
				{
					if (v14[1] - v16 >= v15)
						break;
					v14 = (_QWORD*)*v14;
					v9 = v23;
					*(_QWORD*)&v23 = v14;
				} while (v14);
			}
			v23 = v9;
		}
		v7 = (__int64*)v23;
	}
	v17 = *v7;
	v18 = 0;
	v19 = 0i64;
	if (*v7)
		goto LABEL_18;
	if (!a3 && (*(unsigned __int8(__fastcall**)(__int64))(*(_QWORD*)a1 + 184i64))(a1))
	{
		v7 = (__int64*)v23;
		v17 = *(_QWORD*)v23;
	LABEL_18:
		v20 = *(unsigned int*)(a1 + 144);
		v21 = v7[1] - v20;
		if (v21 < 0)
			v21 = 0i64;
		v22 = *(_QWORD*)(v17 + 8) - v20;
		if (v22 < 0)
			v22 = 0i64;
		v19 = v22 - v21;
		goto LABEL_23;
	}
	v18 = 1;
LABEL_23:
	sub_1408908D0(a2, (__int64)&v23);
	sub_1408908C0(a2, v19, v18);
}

