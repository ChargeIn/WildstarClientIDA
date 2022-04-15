//----- (00000001400449A0) ----------------------------------------------------
__int64 sub_1400449A0()
{
	int* v0; // rax

	if (qword_140C65898)
	{
		sub_140016480(qword_140C65678);
		v0 = sub_14054F210();
		(*(void(__fastcall**)(int*))(*(_QWORD*)v0 + 24i64))(v0);
	}
	else
	{
		PostQuitMessage(0);
	}
	return 0i64;
}
// 140C65678: using guessed type __int64 qword_140C65678;
// 140C65898: using guessed type __int64 qword_140C65898;

