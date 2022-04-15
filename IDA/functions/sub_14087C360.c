//----- (000000014087C360) ----------------------------------------------------
int* __fastcall sub_14087C360(__int64 a1, __int64 a2)
{
	__int16 v3; // di
	int* result; // rax

	v3 = a2;
	result = sub_1407E4830(*(int**)(a1 + 64), 0i64, (unsigned int)((unsigned __int64)(a2 + 7) >> 3));
	*(_WORD*)(a1 + 32) = v3;
	return result;
}

