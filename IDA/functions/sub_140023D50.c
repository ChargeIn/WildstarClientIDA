//----- (0000000140023D50) ----------------------------------------------------
__int64 sub_140023D50()
{
	int* v0; // rax
	void(__fastcall * **v1)(_QWORD); // rbx

	if (!*(_DWORD*)(qword_140C66DA8 + 368))
	{
		v0 = sub_14018B280(256i64, 0);
		if (v0)
			v1 = (void(__fastcall***)(_QWORD))sub_140045580((__int64)v0);
		else
			v1 = 0i64;
		if ((int)sub_140045760((__int64)v1, *(void(__fastcall****)(_QWORD))(qword_140C66DA8 + 184)) < 0
			|| (int)sub_14003E380(qword_140C66DA8, v1) < 0)
		{
			sub_1400232F0(qword_140C66DA8, 501421);
		}
		else
		{
			*(_DWORD*)(qword_140C66DA8 + 368) = 5;
		}
		if (v1)
			(*v1)[1](v1);
	}
	return 0i64;
}
// 140C66DA8: using guessed type __int64 qword_140C66DA8;

