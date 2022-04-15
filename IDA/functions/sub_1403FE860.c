//----- (00000001403FE860) ----------------------------------------------------
__int64* __fastcall sub_1403FE860(__int64 a1, __int64 a2)
{
	__int64** v2; // r9
	__int64** v3; // r8
	__int64* result; // rax
	float* v5; // rcx
	float* v6; // rdx
	__int64 v7; // r11
	__int64* v8; // rdx

	v2 = *(__int64***)(a1 + 8);
	v3 = *(__int64***)(a2 + 8);
	result = *v2;
	v5 = (float*)*v3;
	if (*v2 == (__int64*)v2)
	{
	LABEL_9:
		if (v5 != (float*)v3 && v2 != v3)
		{
			*v3[1] = (__int64)v2;
			**((_QWORD**)v5 + 1) = v3;
			*v2[1] = (__int64)v5;
			v8 = v2[1];
			v2[1] = v3[1];
			result = (__int64*)*((_QWORD*)v5 + 1);
			v3[1] = result;
			*((_QWORD*)v5 + 1) = v8;
		}
	}
	else
	{
		while (v5 != (float*)v3)
		{
			if (*((float*)result + 18) >= v5[18])
			{
				result = (__int64*)*result;
			}
			else
			{
				v6 = *(float**)v5;
				if (result != *(__int64**)v5)
				{
					**((_QWORD**)v6 + 1) = result;
					**((_QWORD**)v5 + 1) = v6;
					*(_QWORD*)result[1] = v5;
					v7 = result[1];
					result[1] = *((_QWORD*)v6 + 1);
					*((_QWORD*)v6 + 1) = *((_QWORD*)v5 + 1);
					*((_QWORD*)v5 + 1) = v7;
				}
				v5 = v6;
			}
			if (result == (__int64*)v2)
				goto LABEL_9;
		}
	}
	return result;
}

