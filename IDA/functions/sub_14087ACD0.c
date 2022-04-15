//----- (000000014087ACD0) ----------------------------------------------------
__int64 __fastcall sub_14087ACD0(__int64 a1, unsigned __int16 a2)
{
	__int64 result; // rax

	result = a2;
	*(_WORD*)a1 = a2;
	*(float*)(a1 + 4) = 1.0 / (float)a2;
	return result;
}

