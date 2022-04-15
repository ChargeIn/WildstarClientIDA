//----- (0000000140848C00) ----------------------------------------------------
__int64 __fastcall sub_140848C00(_QWORD* a1, char a2, char a3)
{
	__int64 v3; // r9
	__int64 v4; // r9
	__int64 v5; // r9
	__int64 result; // rax

	v3 = a1[116];
	if (v3 && (a3 & 1) != 0)
		*(_BYTE*)(v3 + 45) = a2 & 1;
	v4 = a1[117];
	if (v4 && (a3 & 2) != 0)
		*(_BYTE*)(v4 + 45) = (a2 & 2) != 0;
	v5 = a1[118];
	if (v5 && (a3 & 4) != 0)
		*(_BYTE*)(v5 + 45) = (a2 & 4) != 0;
	result = a1[119];
	if (result)
	{
		if ((a3 & 8) != 0)
			*(_BYTE*)(result + 45) = (a2 & 8) != 0;
	}
	return result;
}

