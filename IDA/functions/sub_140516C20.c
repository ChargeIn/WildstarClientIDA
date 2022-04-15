//----- (0000000140516C20) ----------------------------------------------------
__int64 sub_140516C20()
{
	__int64 v0; // rsi
	int v1; // r15d
	unsigned __int64 v3; // rax
	unsigned int v4; // ebx
	__int64 v5; // r14
	__int64 i; // rbp
	__int64 v7; // rax
	int* v8; // rdi
	int v9; // ecx
	int v10; // ecx
	int v11; // eax
	__int64 v12; // [rsp+20h] [rbp-4F8h] BYREF
	int* v13; // [rsp+28h] [rbp-4F0h]
	int v14; // [rsp+40h] [rbp-4D8h]
	__int64 v15; // [rsp+320h] [rbp-1F8h]
	int v16; // [rsp+4B8h] [rbp-60h]
	int v17; // [rsp+4C0h] [rbp-58h]

	v0 = *(_QWORD*)(qword_140C65898 + 26392);
	v1 = *(_DWORD*)(*(_QWORD*)(qword_140C65898 + 120) + 8i64);
	if (!v0)
		return 100i64;
	if (*(_DWORD*)v0 == v1)
		v3 = *(_QWORD*)(v0 + 40);
	else
		v3 = *(_QWORD*)(v0 + 48);
	if (v3 >= 0xF4240)
		return 1000i64;
	v4 = 100;
	if (v3)
		v4 = 250;
	v5 = 0i64;
	if (*(_QWORD*)(v0 + 32))
	{
		for (i = 0i64; ; i += 80i64)
		{
			v7 = *(_QWORD*)(v0 + 24);
			if (*(_DWORD*)(v7 + i + 4) == v1)
			{
				v8 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(v7 + i + 8), 0i64);
				if (v8)
					break;
			}
		LABEL_40:
			if ((unsigned __int64)++v5 >= *(_QWORD*)(v0 + 32))
				return v4;
		}
		sub_14040FAE0((__int64)&v12);
		v9 = v17;
		if (v17 > 6)
		{
			v8 = v13;
		}
		else
		{
			v9 = 6;
			v13 = v8;
			v17 = 6;
		}
		if (v16)
		{
			v10 = 1;
			if (v14 > 1)
				v10 = v14;
		}
		else
		{
			if (!v9 || !v8)
			{
			LABEL_36:
				if (v12)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 8i64))(v12);
					v12 = 0i64;
				}
				if (v15)
					sub_14018B900(v15, 0);
				goto LABEL_40;
			}
			v10 = 1;
			if (v8[86] > 1)
				v10 = v8[86];
		}
		v11 = 7;
		if (v10 < 7)
			v11 = v10;
		if (v11 != 1)
		{
			if (v11 > 3)
			{
				v4 = 1000;
				if (v12)
				{
					(*(void (**)(void))(*(_QWORD*)v12 + 8i64))();
					v12 = 0i64;
				}
				if (v15)
					sub_14018B900(v15, 0);
				return v4;
			}
			if (v4 < 0xFA)
				v4 = 250;
		}
		goto LABEL_36;
	}
	return v4;
}
// 140516D8A: conditional instruction was optimized away because eax.4 is in (2..7)
// 140516D9C: conditional instruction was optimized away because eax.4 is in (4..7)
// 140516DAE: conditional instruction was optimized away because ebx.4 is in (==64|==FA)
// 140516E33: conditional instruction was optimized away because ebx.4 is in (==64|==FA)
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;

