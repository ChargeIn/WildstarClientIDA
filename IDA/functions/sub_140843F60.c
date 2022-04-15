//----- (0000000140843F60) ----------------------------------------------------
void sub_140843F60()
{
	__int64 i; // rbx
	char v1; // al

	for (i = qword_140C61F90; i; i = *(_QWORD*)(i + 24))
	{
		v1 = *(_BYTE*)(i + 379);
		if ((v1 & 3) == 1 && (v1 & 0xC) == 4)
			sub_14085EF10(i);
	}
}
// 140C61F90: using guessed type __int64 qword_140C61F90;

