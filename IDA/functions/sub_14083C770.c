//----- (000000014083C770) ----------------------------------------------------
__int64 __fastcall sub_14083C770(__int64* a1)
{
	__int64 result; // rax

	result = *a1;
	a1[1] = *a1;
	*((_DWORD*)a1 + 4) = 0;
	a1[5] = 0i64;
	return result;
}

