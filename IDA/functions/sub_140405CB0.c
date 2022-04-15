//----- (0000000140405CB0) ----------------------------------------------------
void __fastcall sub_140405CB0(__int64 a1, __int64 a2)
{
	__int64 v2; // rdi
	unsigned __int64 v3; // rbx
	unsigned __int64 v5; // rcx
	_QWORD* v6; // rax
	unsigned __int64 v7; // rbp
	int* v8; // rax
	int* v9; // rsi
	int* v10; // rdx
	__int64 v11; // rcx
	__int64 v12; // rax
	__int64 v13; // rax
	int v14; // [rsp+20h] [rbp-38h] BYREF
	__int64 v15; // [rsp+28h] [rbp-30h]
	void(__fastcall * v16)(__int64, __int64); // [rsp+30h] [rbp-28h]
	__int64 v17; // [rsp+38h] [rbp-20h]

	v2 = qword_140C658A0;
	v3 = 0i64;
	do
	{
		v5 = *(_QWORD*)(v2 + 256);
		if (++v3 >= v5)
		{
		LABEL_6:
			v7 = v5 + 1;
			v3 = *(_QWORD*)(v2 + 256);
			v8 = sub_14018DB00(*(_QWORD*)(v2 + 248), v5 + 1, 8i64);
			v9 = v8;
			*(_QWORD*)&v8[2 * v3] = 0i64;
			v10 = *(int**)(v2 + 248);
			if (v10 != v8)
			{
				sub_1407DB590(v8, v10, 8i64 * *(_QWORD*)(v2 + 256));
				v11 = *(_QWORD*)(v2 + 248);
				if (v11)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v11 - 16) + 8i64))(v11 - 16);
				*(_QWORD*)(v2 + 248) = v9;
			}
			*(_QWORD*)(v2 + 256) = v7;
		}
		else
		{
			v6 = (_QWORD*)(*(_QWORD*)(v2 + 248) + 8 * v3);
			while (*v6)
			{
				++v3;
				++v6;
				if (v3 >= v5)
					goto LABEL_6;
			}
		}
	} while (!v3);
	*(_QWORD*)(*(_QWORD*)(v2 + 248) + 8 * v3) = a2;
	v12 = *(_QWORD*)(a2 + 72);
	if (v12)
		*(_WORD*)(v12 + 40) = v3;
	v13 = *(_QWORD*)(a2 + 80);
	if (v13)
		*(_WORD*)(v13 + 40) = v3;
	v14 = 1;
	v16 = sub_14040ACF0;
	v15 = v2;
	v17 = a2;
	sub_140195960(a2, 30000, (__int64)&v14, 4);
}
// 140C658A0: using guessed type __int64 qword_140C658A0;

