//----- (00000001400021B0) ----------------------------------------------------
_DWORD* __fastcall sub_1400021B0(_DWORD* a1)
{
	int v1; // r9d
	_DWORD* result; // rax
	_DWORD* v4; // r8
	__int64 v5; // rcx

	v1 = 0;
	result = a1 + 32;
	if ((int)a1[26] <= 0)
	{
		*a1 = 1;
	}
	else
	{
		v4 = a1 + 89;
		do
		{
			*(_QWORD*)result = *(_QWORD*)(v4 - 9);
			result[3] = *(v4 - 1);
			*((_QWORD*)result + 2) = *(_QWORD*)(v4 - 7);
			result[7] = *v4;
			*((_QWORD*)result + 4) = *(_QWORD*)(v4 - 5);
			result[11] = *v4;
			v5 = *(_QWORD*)(v4 - 3);
			if (v5)
			{
				*((_QWORD*)result + 6) = v5;
				result[15] = *(v4 - 1);
			}
			++v1;
			v4 += 10;
			result += 16;
		} while (v1 < a1[26]);
		*a1 = 1;
	}
	return result;
}

