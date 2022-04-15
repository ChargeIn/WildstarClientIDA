//----- (000000014083EBA0) ----------------------------------------------------
__int64 __fastcall sub_14083EBA0(__int64 a1)
{
	int* v1; // rsi
	_QWORD* v2; // rdi
	__int64 v3; // rbx
	__int64 result; // rax

	v1 = (int*)(a1 + 2032);
	if (*(_DWORD*)(a1 + 2032) != -1)
	{
		v2 = *(_QWORD**)(a1 + 2040);
		LODWORD(v3) = 0;
		if (v2)
		{
			do
			{
			LABEL_7:
				result = sub_140881720(dword_140C10F20, v2[2]);
				v2 = (_QWORD*)*v2;
			} while (v2);
			while (1)
			{
				v3 = (unsigned int)(v3 + 1);
				if ((unsigned int)v3 >= 0x1F)
					break;
				v2 = *(_QWORD**)&v1[2 * v3 + 2];
				if (v2)
					goto LABEL_7;
			}
		}
		else
		{
			while (1)
			{
				v3 = (unsigned int)(v3 + 1);
				if ((unsigned int)v3 >= 0x1F)
					break;
				v2 = *(_QWORD**)&v1[2 * v3 + 2];
				if (v2)
					goto LABEL_7;
			}
		}
		if (*v1 != -1)
		{
			result = sub_140842450(v1);
			*v1 = -1;
		}
	}
	return result;
}
// 14083EBDD: conditional instruction was optimized away because rdi.8==0
// 14083EC0D: conditional instruction was optimized away because rdi.8==0
// 140C10F20: using guessed type int dword_140C10F20;

