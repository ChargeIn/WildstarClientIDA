//----- (0000000140079F30) ----------------------------------------------------
__int64 __fastcall sub_140079F30(__int64 a1, int** a2)
{
	int* v2; // rdx
	__int64 v4; // [rsp+38h] [rbp+10h] BYREF

	v2 = *a2;
	if (v2)
		return sub_1403365E0(a1, v2, (int*)((char*)v2 + (unsigned int)*v2));
	v4 = 0i64;
	return sub_1403365E0(a1, (int*)&v4, (int*)&v4 + 1);
}

