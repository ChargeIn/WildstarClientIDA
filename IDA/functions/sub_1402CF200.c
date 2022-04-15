//----- (00000001402CF200) ----------------------------------------------------
char* __fastcall sub_1402CF200(_OWORD* a1, _OWORD* a2, char* a3)
{
	char* result; // rax
	_OWORD* v4; // r8
	char* v5; // r9

	result = a3;
	if (a1 != a2)
	{
		v4 = a1 + 2;
		v5 = (char*)(result - (char*)a1);
		do
		{
			if (result)
			{
				*(_OWORD*)result = *(v4 - 2);
				*(_OWORD*)((char*)v4 + (_QWORD)v5 - 16) = *(v4 - 1);
				*(_OWORD*)((char*)v4 + (_QWORD)v5) = *v4;
				*(_OWORD*)((char*)v4 + (_QWORD)v5 + 16) = v4[1];
			}
			v4 += 4;
			result += 64;
		} while (v4 - 2 != a2);
	}
	return result;
}

