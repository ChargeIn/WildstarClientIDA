//----- (00000001402F60F0) ----------------------------------------------------
__int64 __fastcall sub_1402F60F0(__int64 a1, float a2)
{
	__int64 result; // rax

	if (a2 != *(float*)(a1 + 208))
	{
		*(float*)(a1 + 208) = a2;
		return sub_1402F5CE0(a1);
	}
	return result;
}

