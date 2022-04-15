//----- (0000000140338C90) ----------------------------------------------------
char* __fastcall sub_140338C90(_QWORD* a1, _QWORD* a2, char* a3)
{
	_QWORD* v5; // r8
	char* v6; // r10
	volatile signed __int32* v7; // rdx

	if (a1 != a2)
	{
		v5 = a1 + 5;
		v6 = (char*)(a3 - (char*)a1);
		do
		{
			if (a3)
			{
				*(_QWORD*)a3 = *(v5 - 5);
				*(_QWORD*)((char*)v5 + (_QWORD)v6 - 32) = *(v5 - 4);
				*(_QWORD*)((char*)v5 + (_QWORD)v6 - 24) = *(v5 - 3);
				v7 = (volatile signed __int32*)*(v5 - 1);
				*(_QWORD*)((char*)v5 + (_QWORD)v6 - 8) = v7;
				*(_QWORD*)((char*)v5 + (_QWORD)v6) = *v5;
				_InterlockedIncrement(v7);
			}
			v5 += 6;
			a3 += 48;
		} while (v5 - 5 != a2);
	}
	return a3;
}

