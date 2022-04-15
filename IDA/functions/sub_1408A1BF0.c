//----- (00000001408A1BF0) ----------------------------------------------------
int* __fastcall sub_1408A1BF0(_DWORD* a1)
{
	__int64 v2; // rdi
	int* v3; // rcx
	int* result; // rax

	if (a1[12])
	{
		v2 = 0i64;
		if (a1[14])
		{
			do
			{
				v3 = *(int**)&a1[2 * v2];
				if (v3)
					result = sub_1407E4830(v3, 0i64, (unsigned int)(4 * a1[12]));
				v2 = (unsigned int)(v2 + 1);
			} while ((unsigned int)v2 < a1[14]);
			a1[13] = 0;
		}
		else
		{
			a1[13] = 0;
		}
	}
	else
	{
		a1[13] = 0;
	}
	return result;
}

