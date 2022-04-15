//----- (00000001408FF360) ----------------------------------------------------
void __fastcall sub_1408FF360(
	unsigned __int64 a1,
	char* a2,
	__int64 a3,
	int(__fastcall* a4)(unsigned __int64, _BYTE*))
{
	unsigned __int64 v4; // r12
	char* v7; // rsi
	_BYTE* v9; // rbx
	unsigned __int64 i; // rdi
	__int64 v11; // r8
	char* v12; // rax
	__int64 v13; // rbx
	char v14; // cl
	char v15; // dl

	if ((unsigned __int64)a2 > a1)
	{
		v4 = a1 + a3;
		v7 = a2;
		do
		{
			v9 = (_BYTE*)a1;
			for (i = v4; i <= (unsigned __int64)v7; i += a3)
			{
				if (a4(i, v9) > 0)
					v9 = (_BYTE*)i;
			}
			v11 = a3;
			v12 = v7;
			if (v9 != v7 && a3)
			{
				v13 = v9 - v7;
				do
				{
					v14 = *v12;
					v15 = (v12++)[v13];
					v12[v13 - 1] = v14;
					*(v12 - 1) = v15;
					--v11;
				} while (v11);
			}
			v7 -= a3;
		} while ((unsigned __int64)v7 > a1);
	}
}

