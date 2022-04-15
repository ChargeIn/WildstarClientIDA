//----- (0000000140280850) ----------------------------------------------------
__int64 __fastcall sub_140280850(__int64 a1, _DWORD* a2)
{
	_DWORD* v2; // r8
	__int64 result; // rax

	v2 = *(_DWORD**)(a1 + 8592);
	if (*((_QWORD*)v2 + 18) != *(_QWORD*)a2
		|| *((_QWORD*)v2 + 19) != *((_QWORD*)a2 + 1)
		|| (result = *((_QWORD*)v2 + 20), result != *((_QWORD*)a2 + 2)))
	{
		v2[36] = *a2;
		v2[37] = a2[1];
		v2[38] = a2[2];
		v2[39] = a2[3];
		v2[40] = a2[4];
		result = (unsigned int)a2[5];
		v2[41] = result;
		*(_DWORD*)(a1 + 7176) |= 0x10u;
	}
	return result;
}

