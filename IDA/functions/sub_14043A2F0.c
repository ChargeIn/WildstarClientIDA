//----- (000000014043A2F0) ----------------------------------------------------
__int64 sub_14043A2F0()
{
	__int64 result; // rax
	__int64 v1; // rcx

	result = qword_140C65898;
	if (qword_140C65898)
	{
		v1 = *(_QWORD*)(qword_140C65898 + 29504);
		if (v1)
			return sub_1400EA3E0(v1, "TutorialPlaybackEnded", &unk_1409D136E);
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;
