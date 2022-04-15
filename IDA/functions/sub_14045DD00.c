//----- (000000014045DD00) ----------------------------------------------------
_QWORD* __fastcall sub_14045DD00(__int64 a1)
{
	unsigned __int64 i; // rbx
	_QWORD* result; // rax
	_QWORD* v4; // rbx
	_QWORD* v5; // rdi
	__int64 v6; // rax
	__int64 v7; // rdi
	__int64 v8; // rsi
	__int64 v9; // rbx
	_DWORD v10[2]; // [rsp+20h] [rbp-28h] BYREF
	__int64 v11; // [rsp+28h] [rbp-20h]
	int v12; // [rsp+30h] [rbp-18h]

	for (i = 0i64; i < 0x1C; ++i)
	{
		v10[0] = 0;
		v10[1] = i;
		v11 = 0i64;
		v12 = 0;
		sub_14045D9C0(a1, v10, i);
	}
	result = *(_QWORD**)(a1 + 1176);
	v4 = (_QWORD*)result[2];
	if (v4 != result)
	{
		do
		{
			v5 = (_QWORD*)v4[5];
			if (v5)
			{
				if (*v5)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(*v5 - 16i64) + 8i64))(*v5 - 16i64);
				sub_14018B900((__int64)v5, 0);
			}
			v6 = v4[3];
			if (v6)
			{
				v4 = (_QWORD*)v4[3];
				for (result = *(_QWORD**)(v6 + 16); result; result = (_QWORD*)result[2])
					v4 = result;
			}
			else
			{
				for (result = (_QWORD*)v4[1]; v4 == (_QWORD*)result[3]; result = (_QWORD*)result[1])
					v4 = result;
				if ((_QWORD*)v4[3] != result)
					v4 = result;
			}
		} while (v4 != *(_QWORD**)(a1 + 1176));
	}
	v7 = a1 + 1168;
	if (*(_QWORD*)(a1 + 1184))
	{
		v8 = *(_QWORD*)(*(_QWORD*)(a1 + 1176) + 8i64);
		if (v8)
		{
			do
			{
				sub_1400083B0(v7, *(_QWORD*)(v8 + 24));
				v9 = *(_QWORD*)(v8 + 16);
				sub_14018B900(v8, 0);
				v8 = v9;
			} while (v9);
		}
		*(_QWORD*)(*(_QWORD*)(v7 + 8) + 16i64) = *(_QWORD*)(v7 + 8);
		*(_QWORD*)(*(_QWORD*)(v7 + 8) + 8i64) = 0i64;
		result = *(_QWORD**)(v7 + 8);
		result[3] = result;
		*(_QWORD*)(v7 + 16) = 0i64;
	}
	return result;
}
// 14045DD37: conditional instruction was optimized away because ebx.4<1Cu

