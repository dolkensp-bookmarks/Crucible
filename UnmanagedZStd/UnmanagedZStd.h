#pragma once

using namespace System;

namespace UnmanagedZStd {
	public ref class ZStd
	{
	public:
		static array<Byte>^ StreamingUncompress(array<Byte>^ bytes, size_t uncompressed_size);

	};
}
