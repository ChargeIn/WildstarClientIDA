//----- (00000001407E8858) ----------------------------------------------------
__int64 __fastcall sub_1407E8858(__int64 a1, unsigned __int16* a2, __int64 a3)
{
	unsigned int v3; // r9d
	unsigned __int16* v4; // r10
	__int64 v5; // r11
	unsigned __int16 v6; // cx
	unsigned __int16 v7; // dx

	v3 = 0;
	v4 = a2;
	if (a3)
	{
		v5 = a1 - (_QWORD)a2;
		do
		{
			v6 = *(unsigned __int16*)((char*)v4 + v5);
			if ((unsigned __int16)(v6 - 65) <= 0x19u)
				v6 += 32;
			v7 = *v4;
			if ((unsigned __int16)(*v4 - 65) <= 0x19u)
				v7 += 32;
			++v4;
			--a3;
		} while (a3 && v6 && v6 == v7);
		return v6 - (unsigned int)v7;
	}
	return v3;
}

