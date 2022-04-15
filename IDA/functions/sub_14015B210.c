//----- (000000014015B210) ----------------------------------------------------
__int64 __fastcall sub_14015B210(__int64 a1)
{
	__int64 v2; // rbx
	__int64 v3; // rax
	BOOL* v4; // r8
	BOOL v5; // edx
	__int64 result; // rax

	v2 = sub_14015B0A0(a1, 1);
	v3 = sub_14015B0A0(a1, 2);
	v4 = *(BOOL**)(a1 + 16);
	v5 = v2 == v3;
	v4[2] = 1;
	result = 1i64;
	*v4 = v5;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}

