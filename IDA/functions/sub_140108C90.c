//----- (0000000140108C90) ----------------------------------------------------
int* __fastcall sub_140108C90(_QWORD* a1)
{
	_QWORD* i; // rbx
	int* v3; // rdi
	int* v4; // rbx
	int* result; // rax

	sub_140109F00(a1 + 6);
	sub_140109E00(a1 + 1);
	for (i = (_QWORD*)a1[12]; i != (_QWORD*)a1[13]; ++i)
	{
		if (*i)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*i + 8i64))(*i);
			*i = 0i64;
		}
	}
	v3 = (int*)a1[13];
	v4 = (int*)a1[12];
	result = sub_1407DB590(v4, v3, 0i64);
	a1[13] += -8 * (((char*)v3 - (char*)v4) >> 3);
	return result;
}

