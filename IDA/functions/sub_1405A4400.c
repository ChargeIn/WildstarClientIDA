//----- (00000001405A4400) ----------------------------------------------------
signed __int64 __fastcall sub_1405A4400(__int64* a1, __int64 a2, unsigned __int8(__fastcall* a3)(_QWORD*, _QWORD*))
{
	__int64 v5; // r9
	signed __int64 result; // rax
	__int64* v7; // rbx
	__int64 v8[3]; // [rsp+30h] [rbp-18h] BYREF

	v5 = a2 - (_QWORD)a1;
	result = (a2 - (_QWORD)a1) & 0xFFFFFFFFFFFFFFF0ui64;
	if (result > 16)
	{
		v7 = (__int64*)(a2 - 16);
		do
		{
			v8[0] = *v7;
			v8[1] = v7[1];
			*v7 = *a1;
			v7[1] = a1[1];
			sub_1405A4650((__int64)a1, 0i64, (v5 - 16) >> 4, v8, a3);
			v7 -= 2;
			v5 = (char*)v7 - (char*)a1 + 16;
			result = v5 & 0xFFFFFFFFFFFFFFF0ui64;
		} while ((__int64)(v5 & 0xFFFFFFFFFFFFFFF0ui64) > 16);
	}
	return result;
}

