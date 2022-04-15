//----- (0000000140062C80) ----------------------------------------------------
char* __fastcall sub_140062C80(__int64 a1, int a2)
{
	int v4; // eax
	char* v5; // rdx

	if (a2 >= 257)
		return off_140A124D0[a2 - 257];
	v4 = sub_1407DE7F8(a2);
	v5 = aCharD;
	if (!v4)
		v5 = aC_16;
	return (char*)sub_14005B130(*(_QWORD*)(a1 + 56), (unsigned __int64*)v5, (unsigned int)a2);
}
// 140A124D0: using guessed type char *off_140A124D0[31];

