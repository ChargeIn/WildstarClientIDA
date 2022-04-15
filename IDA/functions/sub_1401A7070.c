//----- (00000001401A7070) ----------------------------------------------------
__int64 __fastcall sub_1401A7070(_QWORD* a1, __int64 a2)
{
	__int64 v2; // rbx
	int* v4; // rax
	__int64 result; // rax
	__int64 v6; // rdi
	__int64 v7; // rsi
	int* v8; // rbx
	int* v9; // rax
	__int64 v10; // rax

	v2 = a2;
	if (!a2)
		v2 = a1[1];
	if ((*(__int64(__fastcall**)(_QWORD*))(*a1 + 48i64))(a1))
		v4 = 0i64;
	else
		v4 = (int*)sub_1401A4F40((__int64)(a1 + 3));
	result = sub_1401A7740(v2, v4);
	v6 = a1[12];
	v7 = result;
	if (v6)
	{
		do
		{
			v8 = (int*)sub_1401A4F40(v6 + 32);
			v9 = (int*)sub_1401A4F40(v6 + 8);
			v10 = sub_1401A6C70(v7, v9);
			sub_1401A4C50(v10 + 32, v8);
			v6 = *(_QWORD*)(v6 + 56);
		} while (v6);
		return v7;
	}
	return result;
}

