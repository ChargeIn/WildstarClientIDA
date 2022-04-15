//----- (0000000140919B80) ----------------------------------------------------
__int64 __fastcall sub_140919B80(unsigned int a1, _WORD* a2)
{
	__int64 result; // rax
	unsigned int v3; // ecx

	if (a1 > 0xFFFF)
	{
		v3 = a1 - 0x10000;
		*a2 = (v3 >> 10) | 0xD800;
		result = 2i64;
		a2[1] = v3 & 0x3FF | 0xDC00;
	}
	else
	{
		*a2 = a1;
		return 1i64;
	}
	return result;
}

