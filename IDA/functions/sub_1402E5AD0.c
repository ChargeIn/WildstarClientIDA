//----- (00000001402E5AD0) ----------------------------------------------------
__int64 __fastcall sub_1402E5AD0(__int64 a1)
{
	unsigned __int32 v1; // ebx

	v1 = _InterlockedIncrement((volatile signed __int32*)(a1 + 8));
	if (v1 == 1)
		sub_1401984D0(a1 + 96);
	return v1;
}

