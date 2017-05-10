/* -*- Mode: C; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */

/*  Duda I/O
 *  --------
 *  Copyright (C) 2012-2016, Eduardo Silva P. <eduardo@monkey.io>
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#ifndef DUDA_SENDFILE_H
#define DUDA_SENDFILE_H

struct duda_sendfile {
    int fd;
    off_t offset;
    unsigned long pending_bytes;

    struct file_info info;
};

struct duda_sendfile *duda_sendfile_new(char *path, off_t offset,
                                        size_t count);
int duda_sendfile_flush(int socket, struct duda_sendfile *sf);

#endif
